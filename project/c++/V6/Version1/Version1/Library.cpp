/***********************************************************************
 * Module:  Library.cpp
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:47:35
 * Purpose: Implementation of the class Library
 ***********************************************************************/

#include "Catalog.h"
#include "Book.h"
#include "ReadingRoom.h"
#include "Librariar.h"
#include "UserList.h"
#include "Library.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//=========== ����������� (���?) =========== 
Library::Library(bool flag)
	:mUserList({ {}, {} })//�������� ������ ������������
	, mCatalog({ {}, {} })//�������� �������
	, mLibrariar()//�������� ����������
	, mReadingRoom()//�������� ��������� ���
{
	limitTimeStudy = 0;//��������� ���� ��������� ��������� ���������
	limitTimeFiction = 0;//��������� ���� ��������� �������� ���������
	availElectric = false;//�������� �����
	std::cout << "Library created standartly" << endl;
}

//=========== ����������� ����������� =========== 
Library::Library(int numb1, int numb2, bool light, int mode)
	:mUserList({ {}, {} })//������������ ������ ������������
	, mCatalog ({ {}, {} })//������������ �������
	, mLibrariar(mode)//������������ ����������
	, mReadingRoom()//������������ ��������� ���
{
	limitTimeStudy = numb1;//��������� ���� ��������� ��������� ���������
	limitTimeFiction = numb2;//��������� ���� ��������� �������� ���������
	availElectric = light;//�������� �����
	cout << "Library created by initialisation" << endl;
}

//=========== ����������� ��ﳿ =========== 
Library::Library(const Library&lib)
//�������� ���������� ����� ������������ ��������� �������� �����
	:mUserList(lib.mUserList)
	, mCatalog(lib.mCatalog)
	, mLibrariar(lib.mLibrariar)
	, mReadingRoom(lib.mReadingRoom)
{
	limitTimeStudy = lib.limitTimeStudy;
	limitTimeFiction = lib.limitTimeFiction;
	availElectric = lib.availElectric;
	cout << "Library created by copy" << endl;
}

const void hello()
{
	cout << "Welcome to the library!" << endl;
}

void Library::ChBook(int n/*����� �����*/)
{
	mCatalog.CBook(n);
}

//��������� ���������� ��� �����
void Library::GhBook(int n)
{
	mCatalog.GBook(n);
}

//=========== ���������� ===========
Library::~Library()
{
	cout << "Library distroed" << endl;
}

//��������� ��������� �� �������
Catalog& Library::getCatalog()
{
	return mCatalog;
}

//���������� �������� ��������� �� �������� ��������� ���������
inline int Library::getStudy()
{
	return limitTimeStudy;
}

//���������� �������� ��������� �� �������� �������� ���������
inline int Library::getFiction()
{
	return limitTimeFiction;
}

//������������ �������� ��������� �� �������� ��������� ���������
inline void Library::setStudy(int limit)
{
	limitTimeStudy = limit;
}

//������������ �������� ��������� �� �������� �������� ���������
inline void Library::setFiction(int limit)
{
	limitTimeFiction = limit;
}

//��������� ������� �������� ������
inline bool Library::getElectric()
{
	return availElectric;
}
////////////////////////////////////////////////////////////////////////
// Name:       Library::NewDay()
// Purpose:    Implementation of Library::NewDay()
// Return:     void
////////////////////////////////////////////////////////////////////////

UserList& Library::getUserList()
{
	return mUserList;
}

//������� ������ ���
void Library::NewDay()
{
	if (currentDate.day < 31)
		currentDate.day++;
	else if (currentDate.month < 12)
	{
		currentDate.day = 0;
		currentDate.month++;
	}
	else
	{
		currentDate.day = 0;
		currentDate.month = 0;
		currentDate.year = 0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::ChouseAction()
// Purpose:    Implementation of Library::ChouseAction()
// Return:     void
////////////////////////////////////////////////////////////////////////

//������������ ��������� ����
void Library::defineDate()
{
	date dt;//������������� ����
	cout << "Enter year of stsrting modeling" << endl;
	do
	{
		cin >> dt.year;
		if (dt.year < 1900)//���� �� ������ �� 1900
			cout << "Incorect data. Try againe!" << endl;
	} while (dt.year < 1900);
	cout << "Enter monts of starying modeling (number)" << endl;
	do
	{
		cin >> dt.month;
		if ((dt.month > 12) || (dt.month < 1))//���� ����� ������ �� 12 ��� �� ����
			cout << "Incorrect data. Try againe" << endl;
	} while ((dt.month > 12) || (dt.month < 1));
	cout << "Enter day of starting modeling" << endl;
	do
	{
		cin >> dt.day;
		if ((dt.day > 31) || (dt.month<1))//���� ���� ����� �� 31 ��� �� ����
			cout << "Incorrect data. Try againe" << endl;
	} while ((dt.day > 31) || (dt.month<1));
	setCurrentDate(dt);
}

//����
void Library::ChouseAction(void)
{
	char ansv;//������� �� ������� ��� �����������
	int key;//���� ���������������� ������
	int usnumb;
	defineDate();
	do
	{
		cout << "Chouse, what you want to do:" << endl;
		cout << "1. Get copy or scan" << endl;
		cout << "2. Change book" << endl;
		cout << "3. Look book" << endl;
		cout << "4. Add new user" << endl;
		cout << "5. Add book" << endl;
		cout << "6. Loan book" << endl;
		cout << "7. Operator reloading for users" << endl;
		cout << "8. Operator reloading for books" << endl;
		cout << "9. Look all books" << endl;
		cout << "10. Start new day" << endl;
		cin >> key;
		switch (key)
		{
		case 1: mReadingRoom.GiveServises(); break;
		case 2:
		{
			std::string numb;
			cout << "Enter code of your book (put space at the end):" << endl;
			getline(cin, numb, ' ');
			int i;//����� ������� �����
			i = mCatalog.SearchByCode(numb);
			if (i < 0)
				cout << "Book not found!" << endl;
			else
				mCatalog.CBook(i);
			break;
		}
		case 3:
		{
			std::string numb;//��� ������ �����
			cout << "Enter code of your book  (put space at the end):" << endl;
			getline(cin, numb, ' ');
			int i;//����� ������ �����
			i = mCatalog.SearchByCode(numb);
			if (i < 0)
				cout << "Book not found!" << endl;
			else
			mCatalog.GBook(i);
			break;
		}
		case 4:
		{
			mUserList.registration(); break;
		}
		case 5:
		{
			mCatalog.AddBook();
			break;
		}
		case 6:
		{
			std::string name;//��� �����
			int numb1 = mUserList.Autorisation();//��� �����������
			cout << "Enter code of book:" << endl;
			cin >> name;
			int numb2 = mCatalog.SearchByCode(name);
			if (numb2 < 0)
				cout << "Book not found!" << endl;
			else
				LoanBook(numb1, numb2);
			break;
		}
		case 7:
		{
			cout << "Chouse first user" << endl;
			int us1 = mUserList.Autorisation();
			cout << "Chouse seckond user" << endl;
			int us2 = mUserList.Autorisation();
			mUserList.overloads(us1, us2);
		}
		case 8:
		{
			std::string cod1;//��� ����� �����
			std::string cod2;//��� ����� �����
			cout << "Enter cod of first book" << endl;
			cin >> cod1;
			cout << "Enter cod of seckond book" << endl;
			cin >> cod2;
			int bok1 = mCatalog.SearchByCode(cod1);//����� ����� �����
			if (bok1 < 0)
				cout << "First book not found!" << endl;
			else
			{
				int bok2 = mCatalog.SearchByCode(cod2);//����� ����� �����
				if (bok2 < 0)
					cout << "Seckond book not found!" << endl;
				else
					mCatalog.operReload(bok1, bok2);
			}
			break;
		}
		case 9:
		{
			mCatalog.LookAll();
			break;
		}
		case 10:
		{
			NewDay();
			mUserList.NewDay();
			date d = getCurrentDate();//������� ����
			cout << "Current date is:" << endl;
			cout << d.year << "/" << d.month << "/" << d.day << endl;
			break;
		}
		default:
			cout << "Mithing answer, try agune!" << endl;
			break;
		}
		cout << "Continue? (y/n)" << endl;
		cin >> ansv;
	} while (ansv == 'y');
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::ChangeRool()
// Purpose:    Implementation of Library::ChangeRool()
// Return:     void
////////////////////////////////////////////////////////////////////////

//���� ��� ����������
void Library::ChangeRool(int i)
{
	cout << "Chouse, what rol you want to librariar (0 for reading room, 1 for abonement)" << endl;
	cin >> i;
	mLibrariar.setGroop(i);
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::DefineElectric()
// Purpose:    Implementation of Library::DefineElectric()
// Return:     void
////////////////////////////////////////////////////////////////////////

//������������ ������� �������� ������
inline void Library::DefineElectric(bool av)
{
	availElectric = av;
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::LoanBook()
// Purpose:    Implementation of Librariar::LoanBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

//������ �����
void Library::LoanBook(int numbbook, int numbuser)
//numbbook - ����� �����, numbuser - ����� ��������� ������
{
	line nbook;//����� ����� � ��������
	User& us = mUserList.getUser(numbuser);//��������� ��������� �� �������� �����������
	Book& bok = mCatalog.getBook(numbbook);//��������� ��������� �� ������ �����
	std::string cod = bok.getCode();
	nbook.bookcode = cod;
	nbook.daykept = 0;
	if (bok.getAvail() == false)
		cout << "Book isn't free" << endl;
	else
	{
		if ((bok.getLimit() != ridRoomOnly) && ((bok.getLimit() != sinseOnly) || (us.getUserGroop() != lecturer)))
		{
			nbook.onHend = true;
			bok.setAvail(false);//����� ����������
		}
		else
		{
			nbook.onHend = false;
			cout << "Book can be used only in reading room" << endl;
		}
		us.pushline(nbook);//��������� ������ �� ��������� ������ �����������
		date put = getCurrentDate();
		bok.setDat(put);
		cout << "Line added" << endl;
	}
}

void Library::setCurrentDate(date dat)
{
	currentDate = dat;
}

date Library::getCurrentDate()
{
	return currentDate;
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::PotBookBeck()
// Purpose:    Implementation of Librariar::PotBookBeck()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::PotBookBeck(int nbook, int nuse)
{
	
}