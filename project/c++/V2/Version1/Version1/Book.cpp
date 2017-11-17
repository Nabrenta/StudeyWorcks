/***********************************************************************
 * Module:  Book.cpp
 * Author:  Nabra
 * Modified: 23 октября 2016 г. 21:23:29
 * Purpose: Implementation of the class Book
 ***********************************************************************/

#include "Book.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Book::DeleteBook()
// Purpose:    Implementation of Book::DeleteBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

//=========== Деструктор ===========
Book::~Book()
{
	cout << "Book destroed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Book::ChangeBook()
// Purpose:    Implementation of Book::ChangeBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Book::ChangeBook(void)
{
   // TODO : implement
}

//=========== Конструктор за замовчуванням ===========
Book::Book()
{
	nameOfBook = "\0";//встановлення назви книги
	subject = "\0";//встановлення предметної області
	avail = false;//встановлення наявності книги
	limitAsses = ridRoomOnly;//встановлення модифікатору доступу
	putDate.day = 0;//встановлення дати взяття
	putDate.month = 0;//встановлення місяця взяття
	putDate.year = 0;//встановлення року взятя
	stay = 0;//встановлення стану книги
	code = "\0";//встановлення номеру книги
	cost = 0;//встановлення вартості книги
	type = study;//встановлення типу видання
	cout << "Book created standartly" << endl;
}
//Book::Book(char name[], char subj[], bool availib, limit asses, date gateDate, int qality, char codeNumber[], int bookCost, types typeBook)
//{
//	strcpy(nameOfBook, name);//встановлення назви книги
//	strcpy(subject, subj);//встановлення предметної області
//	avail = availib;//встановлення наявності книги
//	limitAsses = asses;//встановлення модифікатору доступу
//	putDate.day = gateDate.day;//встановлення дати взяття
//	putDate.month = gateDate.month;//встановлення місяця взяття
//	putDate.year = gateDate.year;//встановлення року взятя
//	stay = qality;//встановлення стану книги
//	strcpy(code, codeNumber);//встановлення вартості книги
//	cost = bookCost;//встановлення вартості книги
//	type = typeBook;//встановлення типу видання
//	cout << "Book created by initialisation" << endl;
//}

//=========== Конструктор копії ===========
Book:: Book(const Book& otherBook)
{
	//атрибути отриманого класу визначаються атрибтами вхідного класу
	nameOfBook = otherBook.nameOfBook;
	subject = otherBook.subject;
	avail = otherBook.avail;
	limitAsses = otherBook.limitAsses;
	putDate.day = otherBook.putDate.day;
	putDate.month = otherBook.putDate.month;
	putDate.year = otherBook.putDate.year;
	stay = otherBook.stay;
	code = otherBook.code;
	cost = otherBook.cost;
	type = otherBook.type;
	cout << "Book created by copy" << endl;
}