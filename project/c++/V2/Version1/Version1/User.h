/***********************************************************************
 * Module:  User.h
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:46:40
 * Purpose: Declaration of the class User
 ***********************************************************************/

#if !defined(__ClassDiagram_User_h)
#define __ClassDiagram_User_h

#include "Book.h"
#include <vector>
using namespace std;

enum groop { student, lecturer }; //гупа користувачів

class User
{
public:
	User();//конструктор за замовченням
	//User(char[], const std::vector<std::string>&booklist, int, int, char[], groop);
	User(const User&);//конструктор копії
	~User();//деструктор
   void findDebts(void);
   void NumbOfBook(void);

protected:
private:
   std::string login;//логін
   std::vector<std::string>bookList;//вектор номерів книг
   int numberOfBook;//кількість книг, що знаходяться на руках
   int numberOfDebts;//кількість боргів
   std::string password;//пароль
   groop userGroop;//група користувачів


};

#endif