/***********************************************************************
 * Module:  User.cpp
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:46:40
 * Purpose: Implementation of the class User
 ***********************************************************************/

#include "User.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//=========== Конструктор за замовченням ===========
User::User()
{
	login = "\0";
	bookList = std::vector<line>(2);
	numberOfBook = 0;
	numberOfDebts = 0;
	password = "\0";
	userGroop = student;
	cout << "User created standartly" << endl;
}

//=========== Конструктор копії ===========
User::User(const User&us)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
	login = us.login;
	bookList = us.bookList;
	numberOfBook = us.numberOfBook;
	numberOfDebts = us.numberOfDebts;
	password = us.password;
	userGroop = us.userGroop;
	cout << "User created by copy" << endl;
}

User::User(std::string logg, const std::vector<line>&booklist, int numb1, int numb2, std::string pass, groop uGroop)
{
	login = logg;
	for (int i = 0; i < (int)booklist.size(); i++)
		bookList.push_back(booklist[i]);
	numberOfBook = numb1;
	numberOfDebts = numb2;
	password = pass;
	userGroop = uGroop;
	cout << "User initialisated by initialisation" << endl;

}

//=========== Деструктор ===========
User::~User()
{
	cout << "User destroed" << endl;
}

//повернути логін користувача
std::string User::getLogin()
{
	return login;
}

//повернути обраний номер книги
line User::getBook(int n)
{
	return bookList[n];
}

//повернути кількість книг на руках
int User::getNumbBook()
{
	return numberOfBook;
}

//повернути кількість боргів
int User::getNumbDebts()
{
	return numberOfDebts;
}

//повернути пароль
std::string User::getPassword()
{
	return password;
}

//повернути групу користувача
groop User::getUserGroop()
{
	return userGroop;
}

//повернути логін користувача
inline void User::setLogin(std::string username)
{
	login = username;
}

//повернути пароль
inline void User::setPassword(std::string pass)
{
	password = pass;
}

//повернути групу користувача
inline void User::setUserGroop(int grup)
{
	userGroop = (groop)grup;
}

//Переозначення оператора присвоювання
User& User:: operator=(const User& us)
{
	login = us.login;
	bookList = us.bookList;
	numberOfBook = us.numberOfBook;
	numberOfDebts = us.numberOfDebts;
	password = us.password;
	userGroop = us.userGroop;
	return *this;
}

bool User::operator>(const User& us)
{
	login == us.login;
	numberOfBook == us.numberOfBook;
	numberOfDebts == us.numberOfDebts;
	password == us.password;
	userGroop == us.userGroop;
	return (bookList.size() > us.bookList.size());
}
bool User::operator<(const User& us)
{
	login == us.login;
	numberOfBook == us.numberOfBook;
	numberOfDebts == us.numberOfDebts;
	password == us.password;
	userGroop == us.userGroop;
	return (bookList.size() < us.bookList.size());
}
bool User::operator>=(const User& us)
{
	login == us.login;
	numberOfBook == us.numberOfBook;
	numberOfDebts == us.numberOfDebts;
	password == us.password;
	userGroop == us.userGroop;
	return (bookList.size() >= us.bookList.size());
}
bool User::operator<=(const User& us)
{
	login == us.login;
	numberOfBook == us.numberOfBook;
	numberOfDebts == us.numberOfDebts;
	password == us.password;
	userGroop == us.userGroop;
	return (bookList.size() <= us.bookList.size());
}
////////////////////////////////////////////////////////////////////////
// Name:       User::findDebts()
// Purpose:    Implementation of User::findDebts()
// Return:     void
////////////////////////////////////////////////////////////////////////

void User::findDebts(int maxstad, int maxfict)
{
	numberOfDebts = 0;
	for (int i = 0; i < (int)bookList.size(); i++)
	{
		if (bookList[i].onHend == true)
			if (((bookList[i].booktype == study) && (bookList[i].daykept > maxstad)) || ((bookList[i].booktype == fiction) && (bookList[i].daykept > maxfict)))
				numberOfDebts++;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       User::NumbOfBook()
// Purpose:    Implementation of User::NumbOfBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

//Підрахунок кількості книжок на руках
void User::NumbOfBook(void)
{
	numberOfBook = 0;//кількість книжок вважати рівною 0
	for (int i = 0; i < (int)bookList.size(); i++)
	{
		if (bookList[i].onHend == true)
			numberOfBook++;
	}
}
//Додавання запису до облікового запису
void User::pushline(line n)
{
	bookList.push_back(n);
}
istream& operator>>(istream& is, User& us)
{
	is >> us.login >> us.password;
	return is;
}