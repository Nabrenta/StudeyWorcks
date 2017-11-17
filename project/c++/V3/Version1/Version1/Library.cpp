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

//���� �����
void Library::ChBook(int n)
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