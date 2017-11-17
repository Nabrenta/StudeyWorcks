/***********************************************************************
 * Module:  User.h
 * Author:  Nabra
 * Modified: 20 окт€бр€ 2016 г. 1:46:40
 * Purpose: Declaration of the class User
 ***********************************************************************/

#if !defined(__ClassDiagram_User_h)
#define __ClassDiagram_User_h

#include "Book.h"

enum groop { student, lecturer };

class User
{
public:
   void findDebts(void);
   void NumbOfBook(void);

protected:
private:
   char login[256];
   char **bookList;
   int numberOfBook;
   int numberOfDebts;
   char password[256];
   groop userGroop;


};

#endif