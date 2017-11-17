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

struct line
{
	std::string bookcode;
	int daykept;
	bool onHend;
};

enum groop { student, lecturer }; //���� ������������

class User
{
public:
	User();//����������� �� �����������
	//User(char[], const std::vector<std::string>&booklist, int, int, char[], groop);
	User(const User&);//����������� ��ﳿ
	~User();//����������
   void findDebts(void);
   void NumbOfBook(void);
   std::string getLogin();//��������� ���� �����������
   line getBook(int);//��������� ������� ����� �����
   int getNumbBook();//��������� ������� ���� �� �����
   int getNumbDebts();//��������� ������� �����
   std::string getPassword();//��������� ������
   groop getUserGroop();//��������� ����� �����������

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