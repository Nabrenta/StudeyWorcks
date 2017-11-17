/***********************************************************************
 * Module:  User.h
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:46:40
 * Purpose: Declaration of the class User
 ***********************************************************************/

#if !defined(__ClassDiagram_User_h)
#define __ClassDiagram_User_h

#include "Book.h"
#include <vector>
using namespace std;

//����� � ��������� �����
struct line
{
	std::string bookcode;//��� �����
	int daykept;//������ ��� ���� �� �����
	bool onHend;//�� �����?
	types booktype;//��� �����
};

enum groop { student, lecturer }; //���� ������������

class User
{
public:
	User();//����������� �� �����������
	User(std::string logg, const std::vector<line>&booklist, int numb1, int numb2, std::string pass, groop uGroop);
	User(const User&);//����������� ��ﳿ
	~User();//����������
   void findDebts(int, int);//�������� �� �����
   void NumbOfBook(void);//��������� ������� ������ �� �����
   std::string getLogin();//��������� ���� �����������
   line getBook(int);//��������� ������� ����� �����
   int getNumbBook();//��������� ������� ���� �� �����
   int getNumbDebts();//��������� ������� �����
   std::string getPassword();//��������� ������
   groop getUserGroop();//��������� ����� �����������
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
   std::string login;//����
   std::vector<line>bookList;//������ ������ ����
   int numberOfBook;//������� ����, �� ����������� �� �����
   int numberOfDebts;//������� �����
   std::string password;//������
   groop userGroop;//����� ������������
   inline void setLogin(std::string);//��������� ���� �����������
   inline void setPassword(std::string);//��������� ������
   inline void setUserGroop(int);//��������� ����� �����������

};

#endif