/***********************************************************************
 * Module:  User.cpp
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:46:40
 * Purpose: Implementation of the class User
 ***********************************************************************/

#include "User.h"
#include <iostream>
#include <vector>

using namespace std;

//=========== ����������� �� ����������� ===========
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

//=========== ����������� ��ﳿ ===========
User::User(const User&us)
//�������� ���������� ����� ������������ ��������� �������� �����
{
	login = us.login;
	bookList = us.bookList;
	numberOfBook = us.numberOfBook;
	numberOfDebts = us.numberOfDebts;
	password = us.password;
	userGroop = us.userGroop;
	cout << "User created by copy" << endl;
}

//User::User(char log[], const std::vector<std::string>&booklist, int numb1, int numb2, char pass[], groop uGroop)
//	:bookList({},)
//{
//	strcpy(login, log);
//	for (int i = 0; i < 10; i++)
//		strcpy(bookList[i], boox[i]);
//	numberOfBook = numb1;
//	numberOfDebts = numb2;
//	strcpy(password, pass);
//	userGroop = uGroop;
//	cout << "User initialisated by initialisation" << endl;
//
//}

//=========== ���������� ===========
User::~User()
{
	cout << "User destroed" << endl;
}

//��������� ���� �����������
std::string User::getLogin()
{
	return login;
}

//��������� ������� ����� �����
line User::getBook(int n)
{
	return bookList[n];
}

//��������� ������� ���� �� �����
int User::getNumbBook()
{
	return numberOfBook;
}

//��������� ������� �����
int User::getNumbDebts()
{
	return numberOfDebts;
}

//��������� ������
std::string User::getPassword()
{
	return password;
}

//��������� ����� �����������
groop User::getUserGroop()
{
	return userGroop;
}

//��������� ���� �����������
inline void User::setLogin(std::string username)
{
	login = username;
}

//��������� ������
inline void User::setPassword(std::string pass)
{
	password = pass;
}

//��������� ����� �����������
inline void User::setUserGroop(int grup)
{
	userGroop = (groop)grup;
}

////////////////////////////////////////////////////////////////////////
// Name:       User::findDebts()
// Purpose:    Implementation of User::findDebts()
// Return:     void
////////////////////////////////////////////////////////////////////////

void User::findDebts(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       User::NumbOfBook()
// Purpose:    Implementation of User::NumbOfBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

void User::NumbOfBook(void)
{
   // TODO : implement
}