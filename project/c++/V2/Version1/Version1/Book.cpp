/***********************************************************************
 * Module:  Book.cpp
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:23:29
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

void Book::ChangeBook(void)
{
   // TODO : implement
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