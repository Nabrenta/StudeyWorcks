/***********************************************************************
 * Module:  UserList.cpp
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:41:55
 * Purpose: Implementation of the class UserList
 ***********************************************************************/

#include "User.h"
#include "UserList.h"
#include <iostream>
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

////////////////////////////////////////////////////////////////////////
// Name:       UserList::Autorisation()
// Purpose:    Implementation of UserList::Autorisation()
// Return:     void
////////////////////////////////////////////////////////////////////////

void UserList::Autorisation(void)
{
   // TODO : implement
}