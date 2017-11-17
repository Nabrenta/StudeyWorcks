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
#include "ErrorBook.h"

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

//������ ����� �� ��������
void Catalog::AddBook()
{
	Book nbook;
	nbook.setBook();
	mBook.push_back(nbook);
}

//��������� ��������� �� ����� �� ���������� �������
Book& Catalog::getBook(int n)//n - ����� �����
{
	return mBook[n];
}

////////////////////////////////////////////////////////////////////////
// Name:       Catalog::SearchByName()
// Purpose:    Implementation of Catalog::SearchByName()
// Return:     void
////////////////////////////////////////////////////////////////////////

//����� �� �����
int Catalog::SearchByCode(std::string numb)
{
	if (mBook.size() == 2)
		throw EmptyCatalog();
	else
	{
		int n = 0;//����� �����
		bool flag = false;
		for (int i = 0; i < (int)mBook.size(); i++)
		{
			if (mBook[i].getCode() == numb)
			{
				n = i;
				flag = true;
			}
		}
		if (flag == false)
			throw ErrorBook();
		else
			return n;
	}
}

//������������ ������������� ���������
void Catalog::operReload(int book1, int book2/*�����, ��� ���� ����������� 䳿*/)
{
	mBook[book1].OutputInformation();//������� ��� ��� �����
	mBook[book2].OutputInformation();//...
	char ansv;//������� �� ����� ��� ����������� ������
	int key;//���� ���������������� ������
	do
	{
		cout << "Chouse action:" << endl;
		cout << "1.'And'" << endl;
		cout << "2.'Or'" << endl;
		cout << "3. Increment of first book (stay and cost) infix" << endl;
		cout << "4. Decrement of first book (stay and cost) infix" << endl;
		cout << "5. Increment of first book (stay and cost) postfix" << endl;
		cout << "6. Decrement of first book (stay and cost) postfix" << endl;
		cout << "7. Summ of books" << endl;
		cout << "8. Summ with awarding to first" << endl;
		cin >> key;
		switch (key)
		{
			//������������ �������������� �������� "�"
		case 1:
		{
			if ((mBook[book1] && mBook[book2]) == true)
				cout << "Two boox are availible" << endl;
			else
				cout << "One or no book is availible" << endl;
			cout << endl;
			break;
		}
		//������������ �������������� �������� "���"
		case 2:
		{
			if ((mBook[book1] || mBook[book2]) == true)
				cout << "Not less then one book is availible" << endl;
			else
				cout << "No book aren't avilible" << endl;
			cout << endl;
			break;
		}

		//������������ �������������� ���������� ����������
		case 3:
		{
			Book nbook;
			mBook.push_back(nbook);
			mBook[mBook.size() - 1] = ++mBook[book1];
			mBook[mBook.size() - 1].OutputInformation();
			cout << endl;
			break;
		}

		//������������ �������������� ������������ ����������
		case 4:
		{
			Book nbook;
			mBook.push_back(nbook);
			mBook[mBook.size() - 1] = --mBook[book1];
			mBook[mBook.size() - 1].OutputInformation();
			cout << endl;
			break;		
		}

		//������������ �������������� ���������� ����������
		case 5:
		{
			Book nbook;
			mBook.push_back(nbook);
			mBook[mBook.size() - 1] = mBook[book1]++;
			mBook[mBook.size() - 1].OutputInformation();
			cout << endl;
			break;
		}

		//������������ �������������� ������������ ����������
		case 6:
		{
			Book nbook;
			mBook.push_back(nbook);
			mBook[mBook.size() - 1] = mBook[book1]--;
			mBook[mBook.size() - 1].OutputInformation();
			cout << endl;
			break;
		}
		case 7:
		{
			Book nbook;
			mBook.push_back(nbook);
			mBook[mBook.size() - 1] = mBook[book1] + mBook[book2];
			mBook[mBook.size() - 1].OutputInformation();
			break;
		}
		case 8:
		{
			mBook[book1] += mBook[book2];
			mBook[book1].OutputInformation();
			break;
		}
		default:
			cout << "Try againe!" << endl;
			break;
		}
		cout << "Continue? (y/any other)" << endl;
		cin >> ansv;
		cout << endl;
	} while (ansv == 'y');
}
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

//����������� ��� �������
void Catalog::LookAll(void)
{
	if (mBook.size() == 2)
		throw EmptyCatalog();
	else
	{
		cout << "WE HAWE SUCH BOOKS:" << endl;
		cout << endl;
		for (int i = 2; i < mBook.size(); i++)
		{
			mBook[i].OutputInformation();
			cout << endl;
		}
	}
}