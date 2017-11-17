/***********************************************************************
 * Module:  Library.cpp
 * Author:  Nabra
 * Modified: 23 октября 2016 г. 21:47:35
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
//=========== Конструктор (тип?) =========== 
Library::Library(bool flag)
	:mUserList({ {}, {} })//створити список користувачів
	, mCatalog({ {}, {} })//створити каталог
	, mLibrariar()//створити бібліотекаря
	, mReadingRoom()//створити читальний зал
{
	limitTimeStudy = 0;//обмеження часу утримання навчальної літератури
	limitTimeFiction = 0;//отримання часу утримання художньої літератури
	availElectric = false;//наявність світла
	std::cout << "Library created standartly" << endl;
}

//=========== Конструктор ініціалізації =========== 
Library::Library(int numb1, int numb2, bool light, int mode)
	:mUserList({ {}, {} })//ініціалізувати список користувачів
	, mCatalog ({ {}, {} })//ініціалізувати каталог
	, mLibrariar(mode)//ініціалізувати бібліотекаря
	, mReadingRoom()//інціалізувати читальний зал
{
	limitTimeStudy = numb1;//обмеження часу утримання навчальної літератури
	limitTimeFiction = numb2;//отримання часу утримання художньої літератури
	availElectric = light;//наявність світла
	cout << "Library created by initialisation" << endl;
}

//=========== Конструктор копії =========== 
Library::Library(const Library&lib)
//атрибути отриманого класу визначаються атрибтами вхідного класу
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

void Library::ChBook(int n/*номер книги*/)
{
	mCatalog.CBook(n);
}

//Виведення інформації про книгу
void Library::GhBook(int n)
{
	mCatalog.GBook(n);
}

//=========== Деструктор ===========
Library::~Library()
{
	cout << "Library distroed" << endl;
}

//Отримання посилання на каталог
Catalog& Library::getCatalog()
{
	return mCatalog;
}

//Повернення часового обмеження на утримння навчальної літератури
inline int Library::getStudy()
{
	return limitTimeStudy;
}

//Повернення часового обмеження на утримння художньої літератури
inline int Library::getFiction()
{
	return limitTimeFiction;
}

//Встановлення часового обмеження на утримння навчальної літератури
inline void Library::setStudy(int limit)
{
	limitTimeStudy = limit;
}

//Встановлення часового обмеження на утримння художньої літератури
inline void Library::setFiction(int limit)
{
	limitTimeFiction = limit;
}

//Отримання маркеру наявності струму
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

//початок нового дня
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

//Встановлення початкової дати
void Library::defineDate()
{
	date dt;//встановлювана дата
	cout << "Enter year of stsrting modeling" << endl;
	do
	{
		cin >> dt.year;
		if (dt.year < 1900)//якщо рік менший за 1900
			cout << "Incorect data. Try againe!" << endl;
	} while (dt.year < 1900);
	cout << "Enter monts of starying modeling (number)" << endl;
	do
	{
		cin >> dt.month;
		if ((dt.month > 12) || (dt.month < 1))//якщо місяць більший за 12 або не існує
			cout << "Incorrect data. Try againe" << endl;
	} while ((dt.month > 12) || (dt.month < 1));
	cout << "Enter day of starting modeling" << endl;
	do
	{
		cin >> dt.day;
		if ((dt.day > 31) || (dt.month<1))//якщо дата більша за 31 або не існує
			cout << "Incorrect data. Try againe" << endl;
	} while ((dt.day > 31) || (dt.month<1));
	setCurrentDate(dt);
}

//Меню
void Library::ChouseAction(void)
{
	char ansv;//відповідь на питання про продовження
	int key;//ключ багатоваріантного вибору
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
			int i;//номер потрібної книги
			i = mCatalog.SearchByCode(numb);
			if (i < 0)
				cout << "Book not found!" << endl;
			else
				mCatalog.CBook(i);
			break;
		}
		case 3:
		{
			std::string numb;//код шуканої книги
			cout << "Enter code of your book  (put space at the end):" << endl;
			getline(cin, numb, ' ');
			int i;//номер шуканої книги
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
			std::string name;//код книги
			int numb1 = mUserList.Autorisation();//код користувача
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
			std::string cod1;//код першої книги
			std::string cod2;//код другої книги
			cout << "Enter cod of first book" << endl;
			cin >> cod1;
			cout << "Enter cod of seckond book" << endl;
			cin >> cod2;
			int bok1 = mCatalog.SearchByCode(cod1);//номер першої книги
			if (bok1 < 0)
				cout << "First book not found!" << endl;
			else
			{
				int bok2 = mCatalog.SearchByCode(cod2);//номер другої книги
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
			date d = getCurrentDate();//поточна дата
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

//Зміна ролі бібліотекаря
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

//Встановлення маркеру наявності струму
inline void Library::DefineElectric(bool av)
{
	availElectric = av;
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::LoanBook()
// Purpose:    Implementation of Librariar::LoanBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

//Видача книги
void Library::LoanBook(int numbbook, int numbuser)
//numbbook - номер книги, numbuser - номер облікового запису
{
	line nbook;//новий щапис у формулярі
	User& us = mUserList.getUser(numbuser);//отримання посилання на шуканого користувача
	Book& bok = mCatalog.getBook(numbbook);//отримання посилання на шукану книгу
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
			bok.setAvail(false);//книга недоступна
		}
		else
		{
			nbook.onHend = false;
			cout << "Book can be used only in reading room" << endl;
		}
		us.pushline(nbook);//додавання запису до облікового запису користувача
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