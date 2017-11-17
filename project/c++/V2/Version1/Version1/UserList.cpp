/***********************************************************************
 * Module:  UserList.cpp
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:41:55
 * Purpose: Implementation of the class UserList
 ***********************************************************************/

#include "User.h"
#include "UserList.h"
#include <iostream>
using namespace std;

//=========== Конструктор (тип?) ===========
UserList::UserList(const std::vector<User>&mUsers)
	:mUser(mUsers)
{
	cout << "User list created by initialisation" << endl;
}

//=========== Конструктор копії ===========
UserList::UserList(const UserList&uslist)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
	mUser = uslist.mUser;
	cout << "User list created by copy" << endl;
}

//=========== Деструктор ===========
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