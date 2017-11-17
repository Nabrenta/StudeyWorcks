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

protected:
private:
   std::string login;//����
   std::vector<std::string>bookList;//������ ������ ����
   int numberOfBook;//������� ����, �� ����������� �� �����
   int numberOfDebts;//������� �����
   std::string password;//������
   groop userGroop;//����� ������������


};

#endif