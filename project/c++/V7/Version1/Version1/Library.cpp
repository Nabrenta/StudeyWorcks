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
#include "ErrorBook.h"
#include "ErrorUser.h"
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

void Library::setCurrentDate(date dat)
{
	currentDate = dat;
}

date Library::getCurrentDate()
{
	return currentDate;
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
	cout << endl;
	DefineRool();
	cout << endl;
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
		cout << "11. Give book beck" << endl;
		cin >> key;
		switch (key)
		{
		case 1: mReadingRoom.GiveServises(); break;
		case 2:
		{
			try
			{
				std::string numb;
				cout << "Enter code of your book (put space at the end):" << endl;
				getline(cin, numb, ' ');
				int i;//номер потрібної книги
				i = mCatalog.SearchByCode(numb);
				mCatalog.CBook(i);
			}
			catch (EmptyCatalog Err)
			{
				Err.noBook();
			}
			catch (ErrorBook Err)
			{
				Err.notFound();
			}
			break;
		}
		case 3:
		{
			try
			{
				std::string numb;//код шуканої книги
				cout << "Enter code of your book  (put space at the end):" << endl;
				getline(cin, numb, ' ');
				int i;//номер шуканої книги
				i = mCatalog.SearchByCode(numb);
				mCatalog.GBook(i);
			}
			catch (ErrorBook Err)
			{
				Err.notFound();
			}
			catch (EmptyCatalog Err)
			{
				Err.noBook();
			}
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
			try
			{
				std::string name;//код книги
				int numb1 = mUserList.Autorisation();//код користувача
				cout << "Enter code of book:" << endl;
				cin >> name;
				int numb2 = mCatalog.SearchByCode(name);
				LoanBook(numb2, numb1);
			}
			catch (EmptyCatalog Err)
			{
				Err.noBook();
			}
			catch (EmptyUsList Err)
			{
				Err.noUser();
			}
			catch (ErrorBook Err)
			{
				Err.notFound();
			}
			catch (ErrorUser Err)
			{
				Err.AutorisError();
			}
			catch (Debth Err)
			{
				Err.debthBook();
			}
			break;
		}
		case 7:
		{
			try
			{
				cout << "Chouse first user" << endl;
				int us1 = mUserList.Autorisation();
				cout << "Chouse seckond user" << endl;
				int us2 = mUserList.Autorisation();
				mUserList.overloads(us1, us2);
			}
			catch (EmptyUsList Err)
			{
				Err.noUser();
			}
			catch (ErrorUser Err)
			{
				Err.AutorisError();
			}
		}
		case 8:
		{
			try
			{
				std::string cod1;//код першої книги
				std::string cod2;//код другої книги
				cout << "Enter cod of first book" << endl;
				cin >> cod1;
				cout << "Enter cod of seckond book" << endl;
				cin >> cod2;
				int bok1 = mCatalog.SearchByCode(cod1);//номер першої книги
				int bok2 = mCatalog.SearchByCode(cod2);//номер другої книги
				mCatalog.operReload(bok1, bok2);
			}
			catch (EmptyCatalog Err)
			{
				Err.noBook();
			}
			catch (ErrorBook Err)
			{
				Err.notFound();
			}
			break;
		}
		case 9:
		{
			try
			{
				mCatalog.LookAll();
			}
			catch (EmptyCatalog Err)
			{
				Err.noBook();
			}
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
		case 11:
			try
			{
				std::string cod;
				int n = mUserList.Autorisation();
				cout << "Enter code of book you want put beak:" << endl;
				cin >> cod;
				PotBookBeck(cod, n);
			}
			catch (EmptyUsList Err)
			{
				Err.noUser();
			}
			catch (ErrorUser Err)
			{
				Err.AutorisError();
			}
			break;
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
	cout << "Chouse, what role you want to librariar (0 for reading room, 1 for abonement)" << endl;
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
	us.findDebts(limitTimeStudy, limitTimeFiction);
	if (us.getNumbDebts() > 0)
		throw Debth();
	else
	{
		Book& bok = mCatalog.getBook(numbbook);//отримання посилання на шукану книгу
		std::string cod = bok.getCode();
		nbook.bookcode = cod;
		nbook.daykept = 0;
		nbook.booktype = bok.getType();
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
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::PotBookBeck()
// Purpose:    Implementation of Librariar::PotBookBeck()
// Return:     void
////////////////////////////////////////////////////////////////////////

//Повернення книги
void Library::PotBookBeck(std::string cod, int nuse)
{
	try
	{
		int nbook = mCatalog.SearchByCode(cod);//знайти номер книги
		User& u = mUserList.getUser(nuse);//звернутися до користувача
		u.putBack(cod);//позначити книгу, як повернену
		Book& b = mCatalog.getBook(nbook);//звернутися до книги
		b.setAvail(true);//вважати книгу вільною
		date d;
		d.day = 0;
		d.month = 0;
		d.year = 0;
		b.setDat(d);//встановити дату взяття в нуль
		cout << "Book returned" << endl;
	}
	catch (WasntTaken Err)
	{
		Err.noBook();
	}
}

void Library::DefineRool()
{
	int mstdy;
	cout << "Enter max time of keeping stude literature:" << endl;
	cin >> mstdy;
	setStudy(mstdy);
	int mfict;
	cout << "Enter max time of keeping studefiction literature:" << endl;
	cin >> mfict;
	setFiction(mfict);
}