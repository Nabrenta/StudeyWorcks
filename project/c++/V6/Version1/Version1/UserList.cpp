/***********************************************************************
 * Module:  UserList.cpp
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:41:55
 * Purpose: Implementation of the class UserList
 ***********************************************************************/

#include "User.h"
#include "UserList.h"
#include <iostream>
#include <string>
using namespace std;

//=========== ����������� (���?) ===========
UserList::UserList(const std::vector<User>&mUsers)
	:mUser(mUsers)
{
	cout << "User list created by initialisation" << endl;
}

//=========== ����������� ��ﳿ ===========
UserList::UserList(const UserList&uslist)
//�������� ���������� ����� ������������ ��������� �������� �����
{
	mUser = uslist.mUser;
	cout << "User list created by copy" << endl;
}

//=========== ���������� ===========
UserList::~UserList()
{
	cout << "UserList destroed" << endl;
}

void UserList::NewDay()
{
	for (int i = 0; i < mUser.size(); i++)
	{
		User& us = mUser[i];//���������� 
		int s = us.getsize();
		for (int j = 0; j < s; j++)
			us.newDay(j);
	}
}

//��������� ��������� �� �����������
User& UserList::getUser(int n)
//n - ����� �����������
{
	return mUser[n];
}

//�������������� ���������
void UserList::overloads(int us1, int us2)
{
	char ansv;
	int key;
	do
	{
		cout << "Chouse action:" << endl;
		cout << "1. Make copy of first user" << endl;
		//cout << "2. Make summ of users" << endl;
		//cout << "3. Make minus of users" << endl;
		//cout << "4. Make division of users" << endl;
		//cout << "5. Make summ and awarding to first" << endl;
		//cout << "6. Make minus and awarding to first" << endl;
		//cout << "7. Make division and awarding to first" << endl;
		cout << "2. Make comparison of booklists of user" << endl;
		cin >> key;
		switch (key)
		{
		case 1:
		{
			addUser();
			mUser[mUser.size() - 1] = mUser[us1];
			break;
		}
		//case 2:
		//{
		//	addUser();
		//	mUser[mUser.size() - 1] = mUser[us1] + mUser[us2];
		//	break;
		//}
		//case 3:
		//{
		//	addUser();
		//	mUser[mUser.size() - 1] = mUser[us1] - mUser[us2];
		//	break;
		//}
		//case 4:
		//{
		//	addUser();
		//	mUser[mUser.size() - 1] = mUser[us1] / mUser[us2];
		//	break;
		//}
		//case 5:
		//{
		//	mUser[us1] += mUser[us2];
		//	break;
		//}
		//case 6:
		//{
		//	mUser[us1] -= mUser[us2];
		//	break;
		//}
		//case 7:
		//{
		//	mUser[us1] /= mUser[us2];
		//	break;
		//}
		case 2:
		{
			if (mUser[us2] > mUser[us1])
				cout << "First's boooklist bigger than seckond's booklist" << endl;
			else
				cout << "Seckond's boooklist bigger than first's booklist" << endl;
			if (mUser[us2] < mUser[us1])
				cout << "First's boooklist less than seckond's booklist" << endl;
			else
				cout << "Seckond's boooklist less than first's booklist" << endl;
			if (mUser[us2] >= mUser[us1])
				cout << "First's boooklist bigger than seckond's booklist or equal" << endl;
			else
				cout << "Seckond's boooklist bigger than first's booklist or equal" << endl;
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
//��������� �����������
void UserList::addUser()
{
	User us;
	mUser.push_back(us);
}

////////////////////////////////////////////////////////////////////////
// Name:       UserList::Autorisation()
// Purpose:    Implementation of UserList::Autorisation()
// Return:     void
////////////////////////////////////////////////////////////////////////

//�����������
int UserList::Autorisation()
{
	bool flag = false;//�� �� ���������
	std::string logg;//����
	std::string pass;//������
	cout << "Enter your login:" << endl;
	cin>>logg;
	cout << "Enter your password:" << endl;
	cin>>pass;
	for (int i = 0; i < mUser.size(); i++)
	{
		if ((mUser[i].getLogin() == logg)&&(mUser[i].getPassword() == pass))//��� ���������
		{
			return i;
			flag = true;
		}
	}
	if (flag == false)//���� �� ��������
	{
		cout << "Incorrect login or password!";
		return -1;
	}
}
void UserList::registration()
{
	addUser();
	cout << "Enter name of user and password (under space):" << endl;
	cin >> mUser.back();
}