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

//Запис у обліковому записі
struct line
{
	std::string bookcode;//код книги
	int daykept;//скільки днів була на руках
	bool onHend;//на руках?
	types booktype;//тип книги
};

enum groop { student, lecturer }; //гупа користувачів

class User
{
public:
	User();//конструктор за замовченням
	User(std::string logg, const std::vector<line>&booklist, int numb1, int numb2, std::string pass, groop uGroop);
	User(const User&);//конструктор копії
	~User();//деструктор
   void findDebts(int, int);//перевірка на борги
   void NumbOfBook(void);//підрахунок кількості книжок на руках
   std::string getLogin();//повернути логін користувача
   line getBook(int);//повернути обраний номер книги
   int getNumbBook();//повернути кількість книг на руках
   int getNumbDebts();//повернути кількість боргів
   std::string getPassword();//повернути пароль
   groop getUserGroop();//повернути групу користувача
   void newDay(int);
   int getsize();
   User& operator=(const User&);
   //User& operator+=(const User&);
   //User& operator-=(const User&);
   //User& operator/=(const User&);
   void pushline(line);
   //User operator+(const User&) const;
   //User operator-(const User&) const;
   //User operator/(const User&) const;
   bool operator>(const User&);
   bool operator<(const User&);
   bool operator>=(const User&);
   bool operator<=(const User&);
   friend istream& operator>>(istream& is, User& us);

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