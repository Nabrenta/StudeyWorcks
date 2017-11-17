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

struct line
{
	std::string bookcode;
	int daykept;
	bool onHend;
};

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
   std::string getLogin();//повернути логін користувача
   line getBook(int);//повернути обраний номер книги
   int getNumbBook();//повернути кількість книг на руках
   int getNumbDebts();//повернути кількість боргів
   std::string getPassword();//повернути пароль
   groop getUserGroop();//повернути групу користувача

protected:
private:
   std::string login;//логін
   std::vector<line>bookList;//вектор номерів книг
   int numberOfBook;//кількість книг, що знаходяться на руках
   int numberOfDebts;//кількість боргів
   std::string password;//пароль
   groop userGroop;//група користувачів
   inline void setLogin(std::string);//повернути логін користувача
   inline void setPassword(std::string);//повернути пароль
   inline void setUserGroop(int);//повернути групу користувача

};

#endif