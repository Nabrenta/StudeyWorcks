/***********************************************************************
 * Module:  Book.cpp
 * Author:  Nabra
 * Modified: 23 октября 2016 г. 21:23:29
 * Purpose: Implementation of the class Book
 ***********************************************************************/

#include "Book.h"
#include <string.h>
#include <string>
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

//Повернути назву книги
std::string Book::getName()
{
	return nameOfBook;
}

//Повернути предмет книги
std::string Book::getSubj()
{
	return subject;
}

//Визначити, чи книга доступна
bool Book::getAvail()
{
	return avail;
}

//повернути обмеження на видачу
limit Book::getLimit()
{
	return limitAsses;
}

//повернути дату видачі
date Book::getDat()
{
	return putDate;
}

//повернути стан
int Book::getStay()
{
	return stay;
}

//повернути ідентифікаційний номер
std::string Book::getCode()
{
	return code;
}

//повернути вартість
int Book::getCost()
{
	return cost;
}

//повернути тип
types Book::getType()
{
	return type;
}

//Встановити назву книги
inline void Book::setName(std::string name)
{
	nameOfBook = name;
}

//Встановити предмет книги
inline void Book::setSubj(std::string subj)
{
	subject = subj;
}

//Встановлення маркеру доступності книги
void Book::setAvail(bool aveilib)
{
	avail = aveilib;
}

//встановити обмеження на видачу
inline void Book::setLimit(int i)
{
	limitAsses = (limit)i;
}

//встановити дату видачі
void Book::setDat(date dat)
{
	putDate.day = dat.day;
	putDate.month = dat.month;
	putDate.year = dat.year;
}

//встаовити стан
void Book::setStay(int situate)
{
	stay = situate;
}

//встановити ідентифікаційний номер
inline void Book::setCode(std::string cod)
{
	code = cod;
}

//встановити вартість
inline void Book::setCost(int summ)
{
	cost = summ;
}

//встановити тип
inline void Book::setType(int typ)
{
	type = (types)type;
}

//Зміна атрибутів класу Book
void Book::ChangeBook(void)
{
	int i;//ключ
	std::string subbj;//предметна область
	char ansv;
	do
	{
		cout << "What do you want to change (chouse number):" << endl;
		cout << "1. Name of book" << endl;
		cout << "2. Subject of book" << endl;
		cout << "3. Awailibility o book" << endl;
		cout << "4. Limit off asses to book" << endl;
		cout << "5. Day of geting" << endl;
		cout << "6. Stay of book" << endl;
		cout << "7. Code of book" << endl;
		cout << "8. Cost of book" << endl;
		cout << "9. Type of book (stady or fiction literature)" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			std::string name;//назва книги
			cout << "Enter name of your book (put space at the end)" << endl;
			std::getline(cin, name, ' ');//введення назви
			setName(name);
			break;
		}
		case 2:
		{
			cout << "Enter subject of your book (put space at the end)" << endl;
			std::getline(std::cin, subbj, ' ');//введення назви предметної області
			setSubj(subbj);
			break;
		}
		case 3:
		{
			char ansv1;//відповідь
			bool flag;//модифікатор істиності
			cout << "Chouse, if your book availible (y/n)" << endl;
			cin >> ansv1;
			if (ansv1 == 'y')
				flag = true;
			else
				flag = false;
			setAvail(flag);
			break;
		}
		case 4:
		{
			limit asse;//модифікатор доступу
			int ansv;//відповідь
			cout << "Chouse type of asses limit (0 - for all readers, 1 - only for sines worker, 2 - use only in reading room)" << endl;
			cin >> ansv;
			asse = (limit)ansv;
			setLimit(asse);
			break;
		}
		case 5:
		{
			date dat;//дата
			cout << "Enter year, month and day of geting (betveen spase)" << endl;
			cin >> dat.year >> dat.month >> dat.day;
			setDat(dat);
			break;
		}
		case 6:
		{
			int state;//стан книги
			cout << "Enter stay of book (from 0 to 5)" << endl;
			cin >> state;
			setStay(state);
			break;
		}
		case 7:
		{
			std::string bookkod;//код
			cout << "Enter code of your book (put space at the end)" << endl;
			std::getline(std::cin, bookkod, ' ');
			setCode(bookkod);
			break;
		}
		case 8:
		{
			int sum;//вартість
			cout << "Enter cost of your book" << endl;
			cin >> sum;
			setCost(sum);
			break;
		}
		case 9:
		{
			types tip;//модифікатор типу книги
			int ansv2;//відповідь
			cout << "Chouse type of book limit (0 - for fiction literature, 1 - for learning literature)" << endl;
			cin >> ansv2;
			tip = (types)ansv2;
			setLimit(tip);
			break;
		}
		default:
			break;
		}
		cout << "Continue?(y/n)" << endl;
		cin >> ansv;
	}
	while (ansv == 'y');
}

//Виведення інформації про книгу
void Book::OutputInformation()
{
	std::string name = getName();//вилучити назву
	cout<<"Name of book is: " << name << endl;
	std::string sub = getSubj();//вилучити предметну область
	cout <<"Subject of book is: "<< sub << endl;
	bool av = getAvail();//вилучити модифікатор наявності
	if (av == true)
		cout << "Book availible" << endl;
	else
		cout << "Book isn't availible" << endl;
	limit asse = getLimit();//вилучити модифікатор доступу
	if (asse == forAll)
		cout << "Book availible for all users" << endl;
	else if (asse == sinseOnly)
		cout << "Book availible for sines worker only" << endl;
	else
		cout << "Book availible at the reading room only" << endl;
	date dat = getDat();//вилучити дату
	if (dat.year != 0)
		cout << "Book geted at " << dat.year << "year, " << dat.month << "month, " << dat.day << endl;
	int stay = getStay();//вилучити стан
	cout << "Stay of book is " << stay << "mark" << endl;
	int sum = getCost();//вилучити код
	cout << "Cost of book is " << sum << endl;
	std::string cod = getCode();
	cout << "Code of book is " << cod << endl;
	types tip = getType();//вилучити тип
	if (tip == study)
		cout << "It's stydy literature" << endl;
	else
		cout << "It's fiction" << endl;
}

//=========== Конструктор за замовчуванням ===========
Book::Book()
{
	nameOfBook = "\0";//встановлення назви книги
	subject = "\0";//встановлення предметної області
	avail = true;//встановлення наявності книги
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
Book::Book(std::string name, std::string subj, bool availib, limit asses, date gateDate, int qality, std::string codeNumber, int bookCost, types typeBook)
{
	nameOfBook=name;//встановлення назви книги
	subject = subj;//встановлення предметної області
	avail = availib;//встановлення наявності книги
	limitAsses = asses;//встановлення модифікатору доступу
	putDate.day = gateDate.day;//встановлення дати взяття
	putDate.month = gateDate.month;//встановлення місяця взяття
	putDate.year = gateDate.year;//встановлення року взятя
	stay = qality;//встановлення стану книги
	code = codeNumber;//встановлення вартості книги
	cost = bookCost;//встановлення вартості книги
	type = typeBook;//встановлення типу видання
	cout << "Book created by initialisation" << endl;
}

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

//Встановлення даних про книгу
void Book::setBook()
{
	std::string name;
	std::string subj;
	int lim;
	int stat;
	std::string cod;
	int tip;
	cout << "Enter name of book:" << endl;
	cin >> name;
	setName(name);
	cout << "Enter subject:" << endl;
	cin >> subj;
	setSubj(subj);
	cout << "Chouse type of asses limit (0 - for all readers, 1 - only for sines worker, 2 - use only in reading room)" << endl;
	cin >> lim;
	setLimit(lim);
	cout << "Enter code of book:" << endl;
	cin >> cod;
	setCode(cod);
	cout << "Chouse type of book limit (0 - for fiction literature, 1 - for learning literature)" << endl;
	cin >> tip;
	setType(tip);
}

//Перевантаження оператора "і"
bool Book::operator&&(const Book& bk)
{
	nameOfBook == bk.nameOfBook;
	subject == bk.subject;
	bool flag = avail && bk.avail;
	limitAsses == bk.limitAsses;
	putDate.day == bk.putDate.day;
	putDate.month == bk.putDate.month;
	putDate.year == bk.putDate.year;
	stay == bk.stay;
	code == bk.code;
	cost == bk.cost;
	type == bk.type;
	return flag;
}

//Перевантаження оператора "або"
bool Book::operator||(const Book& bk)
{
	nameOfBook == bk.nameOfBook;
	subject == bk.subject;
	bool flag = avail || bk.avail;
	limitAsses == bk.limitAsses;
	putDate.day == bk.putDate.day;
	putDate.month == bk.putDate.month;
	putDate.year == bk.putDate.year;
	stay == bk.stay;
	code == bk.code;
	cost == bk.cost;
	type == bk.type;
	return (flag);
}

//Перевантаження інфіксного інкремента
Book Book::operator++()
{
	nameOfBook = nameOfBook;
	subject = subject;
	avail = avail;
	limitAsses = limitAsses;
	putDate.day = putDate.day;
	putDate.month = putDate.month;
	putDate.year = putDate.year;
	code = code;
	type = type;
	int st = stay;
	if (st < 5)
		st = st++;
	int ct = cost;
	ct++;
	return Book(nameOfBook, subject, avail, limitAsses, putDate, st, code, ct, type);
}

//перевантаження постфіксного інкремента
Book Book::operator++(int)
{
	nameOfBook = nameOfBook;
	subject = subject;
	avail = avail;
	limitAsses = limitAsses;
	putDate.day = putDate.day;
	putDate.month = putDate.month;
	putDate.year = putDate.year;
	code = code;
	type = type;
	int st = stay;
	if (st < 5)
		st = st++;
	int ct = cost;
	ct++;
	return Book(nameOfBook, subject, avail, limitAsses, putDate, st, code, ct, type);
}

//Перевантаження інфексного декримента
Book Book::operator--()
{
	nameOfBook = nameOfBook;
	subject = subject;
	avail = avail;
	limitAsses = limitAsses;
	putDate.day = putDate.day;
	putDate.month = putDate.month;
	putDate.year = putDate.year;
	code = code;
	type = type;
	int st = stay;
	if (st>0)
		st = st--;
	int ct = cost;
	if (ct > 0)
		ct = ct++;
	return Book(nameOfBook, subject, avail, limitAsses, putDate, st, code, ct, type);
}
//перевантаження постфіксного декримента
Book Book::operator--(int)
{
	nameOfBook = nameOfBook;
	subject = subject;
	avail = avail;
	limitAsses = limitAsses;
	putDate.day = putDate.day;
	putDate.month = putDate.month;
	putDate.year = putDate.year;
	code = code;
	type = type;
	int st = stay;
	if (st>0)
		st = st--;
	int ct = cost;
	if (ct > 0)
		ct = ct++;
	return Book(nameOfBook, subject, avail, limitAsses, putDate, st, code, ct, type);
}

//Створення двотомника
Book Book::operator+(const Book& b) const
{
	std::string bname = nameOfBook + "&" + b.nameOfBook;
	std::string subj = subject + "&" + b.nameOfBook;
	bool av = avail && b.avail;
	limit asses = (limitAsses >= b.limitAsses) ? limitAsses : b.limitAsses;
	date dat;
	if (putDate.year != b.putDate.year)
		dat = (putDate.year > b.putDate.year) ? putDate : b.putDate;
	else if (putDate.month != b.putDate.month)
		dat = (putDate.month > b.putDate.month) ? putDate : b.putDate;
	else
		dat = (putDate.day >= b.putDate.day) ? putDate : b.putDate;
	int stan = (stay < b.stay) ? stay : b.stay;
	std::string cd = code + "&" + b.code;
	int vart = cost + b.cost;
	types tip = (type < b.type) ? type : b.type;
	return Book(bname, subj, av, asses, dat, stan, cd, vart, tip);
}

//Створення двотомника і прийняття за такий першого операнду
Book& Book::operator+=(const Book& b)
{
	nameOfBook = nameOfBook + "&" + b.nameOfBook;
	subject = subject + "&" + b.nameOfBook;
	avail = avail && b.avail;
	limitAsses = (limitAsses >= b.limitAsses) ? limitAsses : b.limitAsses;
	if (putDate.year != b.putDate.year)
		putDate = (putDate.year > b.putDate.year) ? putDate : b.putDate;
	else if (putDate.month != b.putDate.month)
		putDate = (putDate.month > b.putDate.month) ? putDate : b.putDate;
	else
		putDate = (putDate.day >= b.putDate.day) ? putDate : b.putDate;
	stay = (stay < b.stay) ? stay : b.stay;
	code = code + "&" + b.code;
	cost = cost + b.cost;
	type = (type < b.type) ? type : b.type;
	return *this;
}