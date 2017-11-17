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
	cout << "Library created standartly" << endl;
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

Catalog& Library::getCatalog()
{
	return mCatalog;
}
inline int Library::getStudy()
{
	return limitTimeStudy;
}

inline int Library::getFiction()
{
	return limitTimeFiction;
}

inline void Library::setStudy(int limit)
{
	limitTimeStudy = limit;
}

inline void Library::setFiction(int limit)
{
	limitTimeFiction = limit;
}

inline bool Library::getElectric()
{
	return availElectric;
}
////////////////////////////////////////////////////////////////////////
// Name:       Library::NewDay()
// Purpose:    Implementation of Library::NewDay()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::NewDay(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::ChouseAction()
// Purpose:    Implementation of Library::ChouseAction()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::ChouseAction(void)
{
	char ansv;//������� �� ������� ��� �����������
	int key;//���� ���������������� ������
	do
	{
		cout << "Chouse, what you want to do:" << endl;
		cout << "1. Get copy or scan" << endl;
		cout << "2. Change book" << endl;
		cout << "3. Look bool" << endl;
		cin >> key;
		switch (key)
		{
		case 1: mReadingRoom.GiveServises(); break;
		case 2:
		{
			std::string numb;
			cout << "Enter code of your book  (put space at the end):" << endl;
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
			std::string numb;
			cout << "Enter code of your book  (put space at the end):" << endl;
			getline(cin, numb, ' ');
			int i;
			i = mCatalog.SearchByCode(numb);
			if (i < 0)
				cout << "Book not found!" << endl;
			else
			mCatalog.GBook(i);
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

inline void Library::DefineElectric(bool av)
{
	availElectric = av;
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::CreateFormular()
// Purpose:    Implementation of Library::CreateFormular()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::CreateFormular(void)
{
   // TODO : implement
}