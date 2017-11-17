/***********************************************************************
 * Module:  UserList.h
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:41:55
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
	UserList(const std::vector<User>&mUsers);//конструктор (тип?)
	UserList(const UserList&);//конструктор копії
	~UserList();//деструктор
   int Autorisation();//пошук облікового запису
   User& getUser(int);//повернути посилання на користувача
   void overloads(int, int);//перевантаження операторів
   void addUser();
   void registration();//створення облікового запису

protected:
private:
   std::vector<User> mUser;//вектор користувачів


};

#endif