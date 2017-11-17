/***********************************************************************
 * Module:  Book.cpp
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:23:29
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

//=========== ���������� ===========
Book::~Book()
{
	cout << "Book destroed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Book::ChangeBook()
// Purpose:    Implementation of Book::ChangeBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

//��������� ����� �����
std::string Book::getName()
{
	return nameOfBook;
}

//��������� ������� �����
std::string Book::getSubj()
{
	return subject;
}

//���������, �� ����� ��������
bool Book::getAvail()
{
	return avail;
}

//��������� ��������� �� ������
limit Book::getLimit()
{
	return limitAsses;
}

//��������� ���� ������
date Book::getDat()
{
	return putDate;
}

//��������� ����
int Book::getStay()
{
	return stay;
}

//��������� ���������������� �����
std::string Book::getCode()
{
	return code;
}

//��������� �������
int Book::getCost()
{
	return cost;
}

//��������� ���
types Book::getType()
{
	return type;
}

//��������� ����� �����
void Book::setName(std::string name)
{
	nameOfBook = name;
}

//��������� ������� �����
void Book::setSubj(std::string subj)
{
	subject = subj;
}

//���������, �� ����� ��������
void Book::setAvail(bool aveilib)
{
	avail = aveilib;
}

//��������� ��������� �� ������
void Book::setLimit(int i)
{
	limitAsses = (limit)i;
}

//��������� ���� ������
void Book::setDat(date dat)
{
	putDate.day = dat.day;
	putDate.month = dat.month;
	putDate.year = dat.year;
}

//��������� ����
void Book::setStay(int situate)
{
	stay = situate;
}

//��������� ���������������� �����
void Book::setCode(std::string cod)
{
	code = cod;
}

//��������� �������
void Book::setCost(int summ)
{
	cost = summ;
}

//��������� ���
void Book::setType(int typ)
{
	type = (types)type;
}

//���� �������� ����� Book
void Book::ChangeBook(void)
{
	int i;//����
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
	std::string subbj;//��������� �������
	switch (i)
	{
	case 1:
	{
		std::string name;//����� �����
		cout << "Enter name of your book (put space at the end)" << endl;
		std::getline(cin, name,' ');//�������� �����
		setName(name);
		break;
	}
	case 2:
	{
		cout << "Enter subject of your book (put space at the end)" << endl;
		std::getline(std::cin, subbj, ' ');//�������� ����� ��������� ������
		setSubj(subbj);
		break;
	}
	case 3:
	{
		char ansv1;//�������
		bool flag;//����������� ��������
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
		limit asse;//����������� �������
		int ansv;//�������
		cout << "Chouse type of asses limit (0 - for all readers, 1 - only for sines worker, 2 - use only in reading room)" << endl;
		cin >> ansv;
		asse = (limit)ansv;
		setLimit(asse);
		break;
	}
	case 5:
	{
		date dat;//����
		cout << "Enter year, month and day of geting (betveen spase)" << endl;
		cin >> dat.year >> dat.month >> dat.day;
		setDat(dat);
		break;
	}
	case 6:
	{
		int state;//���� �����
		cout << "Enter stay of book (from 0 to 5)" << endl;
		cin >> state;
		setStay(state);
		break;
	}
	case 7:
	{
		std::string bookkod;//���
		cout << "Enter code of your book (put space at the end)" << endl;
		std::getline(std::cin, bookkod, ' ');
		setCode(bookkod);
		break;
	}
	case 8:
	{
		int sum;//�������
		cout << "Enter cost of your book" << endl;
		cin >> sum;
		setCost(sum);
		break;
	}
	case 9:
	{
		types tip;//����������� ���� �����
		int ansv2;//�������
		cout << "Chouse type of book limit (0 - for fiction literature, 1 - for learning literature)" << endl;
		cin >> ansv2;
		tip = (types)ansv2;
		setType(tip);
		break;
	}
	default:
		break;
	}
}

//��������� ���������� ��� �����
void Book::OutputInformation()
{
	std::string name = getName();//�������� �����
	cout<<"Name of book is: " << name << endl;
	std::string sub = getSubj();//�������� ��������� �������
	cout <<"Subject of book is: "<< sub << endl;
	bool av = getAvail();//�������� ����������� ��������
	if (av == true)
		cout << "Book availible" << endl;
	else
		cout << "Book isn't availible" << endl;
	limit asse = getLimit();//�������� ����������� �������
	if (asse == forAll)
		cout << "Book availible for all users" << endl;
	else if (asse == sinseOnly)
		cout << "Book availible for sines worker only" << endl;
	else
		cout << "Book availible at the reading room only" << endl;
	date dat = getDat();//�������� ����
	if (dat.year != 0)
		cout << "Book geted at " << dat.year << "year, " << dat.month << "month, " << dat.day << endl;
	int stay = getStay();//�������� ����
	cout << "Stay of book is " << stay << "mark" << endl;
	int sum = getCost();//�������� ���
	cout << "Cost of book is " << sum << endl;
	types tip = getType();//�������� ���
	if (tip == study)
		cout << "It's stydy literature" << endl;
	else
		cout << "It's fiction" << endl;
}

//=========== ����������� �� ������������� ===========
Book::Book()
{
	nameOfBook = "\0";//������������ ����� �����
	subject = "\0";//������������ ��������� ������
	avail = false;//������������ �������� �����
	limitAsses = ridRoomOnly;//������������ ������������ �������
	putDate.day = 0;//������������ ���� ������
	putDate.month = 0;//������������ ����� ������
	putDate.year = 0;//������������ ���� �����
	stay = 0;//������������ ����� �����
	code = "\0";//������������ ������ �����
	cost = 0;//������������ ������� �����
	type = study;//������������ ���� �������
	cout << "Book created standartly" << endl;
}
//Book::Book(char name[], char subj[], bool availib, limit asses, date gateDate, int qality, char codeNumber[], int bookCost, types typeBook)
//{
//	strcpy(nameOfBook, name);//������������ ����� �����
//	strcpy(subject, subj);//������������ ��������� ������
//	avail = availib;//������������ �������� �����
//	limitAsses = asses;//������������ ������������ �������
//	putDate.day = gateDate.day;//������������ ���� ������
//	putDate.month = gateDate.month;//������������ ����� ������
//	putDate.year = gateDate.year;//������������ ���� �����
//	stay = qality;//������������ ����� �����
//	strcpy(code, codeNumber);//������������ ������� �����
//	cost = bookCost;//������������ ������� �����
//	type = typeBook;//������������ ���� �������
//	cout << "Book created by initialisation" << endl;
//}

//=========== ����������� ��ﳿ ===========
Book:: Book(const Book& otherBook)
{
	//�������� ���������� ����� ������������ ��������� �������� �����
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