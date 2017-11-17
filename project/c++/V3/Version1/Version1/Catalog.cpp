/***********************************************************************
 * Module:  Catalog.cpp
 * Author:  Nabra
 * Modified: 19 ������� 2016 �. 0:01:24
 * Purpose: Implementation of the class Catalog
 ***********************************************************************/

#include "Book.h"
#include "Catalog.h"
#include <iostream>
#include <vector>

using namespace std;

//=========== ����������� (���?) ===========
Catalog::Catalog(const std::vector<Book>&mBooks)
	:mBook(mBooks)
{
	
	cout << "Catalog created by initialisation" << endl;
}

//=========== ����������� ��ﳿ ===========
Catalog::Catalog(const Catalog&cat)
{
	mBook = cat.mBook;
	cout << "Catalog created by copy" << endl;
}

//=========== ���������� =========== 
Catalog::~Catalog()
{
	cout << "Catalog distroed" << endl;
}

//���� �����
void Catalog::CBook(int n)
{
	mBook[n].ChangeBook();
}

//��������� ���������� ��� �����
void Catalog::GBook(int n)
{
	mBook[n].OutputInformation();
}
////////////////////////////////////////////////////////////////////////
// Name:       Catalog::AddBook()
// Purpose:    Implementation of Catalog::AddBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Catalog::AddBook(void)
{
   // TODO : implement
}

//��������� ������������� ����� �� ���������� �������
Book& Catalog::getBook(int n)//n - ����� �����
{
	return mBook[n];
}

////////////////////////////////////////////////////////////////////////
// Name:       Catalog::SearchByName()
// Purpose:    Implementation of Catalog::SearchByName()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Catalog::SearchByName(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Catalog::SearchByPartname()
// Purpose:    Implementation of Catalog::SearchByPartname()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Catalog::SearchByPartname(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Catalog::SearchBySubj()
// Purpose:    Implementation of Catalog::SearchBySubj()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Catalog::SearchBySubj(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Catalog::LookAll()
// Purpose:    Implementation of Catalog::LookAll()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Catalog::LookAll(void)
{
   // TODO : implement
}