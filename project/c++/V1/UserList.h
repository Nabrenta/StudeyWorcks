/***********************************************************************
 * Module:  UserList.h
 * Author:  Nabra
 * Modified: 20 окт€бр€ 2016 г. 1:41:55
 * Purpose: Declaration of the class UserList
 ***********************************************************************/

#if !defined(__ClassDiagram_UserList_h)
#define __ClassDiagram_UserList_h

class User;

#include "User.h"

class UserList
{
public:
   void Autorisation(void);

   User** user;

protected:
private:
   User *mUser;


};

#endif