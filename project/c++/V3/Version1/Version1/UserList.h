/***********************************************************************
 * Module:  UserList.h
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:41:55
 * Purpose: Declaration of the class UserList
 ***********************************************************************/

#if !defined(__ClassDiagram_UserList_h)
#define __ClassDiagram_UserList_h

class User;

#include "User.h"
#include <vector>

class UserList
{
public:
	UserList(const std::vector<User>&mUsers);//����������� (���?)
	UserList(const UserList&);//����������� ��ﳿ
	~UserList();//����������
   void Autorisation(void);
   void getUser(int);

   User** user;

protected:
private:
   std::vector<User> mUser;//������ ������������


};

#endif