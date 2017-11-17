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
	cout << "Library created standartly" << endl;
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

//Зміна книги
void Library::ChBook(int n)
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

Catalog& Library::getCatalog()
{
	return mCatalog;
}
int Library::getStudy()
{
	return limitTimeStudy;
}

int Library::getFiction()
{
	return limitTimeFiction;
}

void Library::setElectric(bool av)
{
	availElectric = av;
}
void Library::setStudy(int limit)
{
	limitTimeStudy = limit;
}

void Library::setFiction(int limit)
{
	limitTimeFiction = limit;
}

bool Library::getElectric()
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
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::ChangeRool()
// Purpose:    Implementation of Library::ChangeRool()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::ChangeRool(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Library::DefineElectric()
// Purpose:    Implementation of Library::DefineElectric()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Library::DefineElectric(void)
{
   // TODO : implement
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