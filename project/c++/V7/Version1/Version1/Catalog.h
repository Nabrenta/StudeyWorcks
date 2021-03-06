/***********************************************************************
 * Module:  Catalog.h
 * Author:  Nabra
 * Modified: 19 ������� 2016 �. 0:01:24
 * Purpose: Declaration of the class Catalog
 ***********************************************************************/

#if !defined(__ClassDiagram_Catalog_h)
#define __ClassDiagram_Catalog_h

class Book;

#include "Book.h"
#include <vector>

class Catalog
{
public:
	Catalog(const std::vector<Book>&mBooks);//����������� (���?)
	Catalog(const Catalog&);//����������� ��ﳿ
	~Catalog();//����������
   void AddBook();//��������� �����
   int SearchByCode(std::string);//����� �� �����
   void SearchByName(void);//����� �� ������
   void SearchByPartname(void);
   void SearchBySubj(void);//����� �� ���������
   void LookAll(void);//����������� ���
   void CBook(int);
   void GBook(int);
   void setBook(int);
   void operReload(int book1, int book2);
   Book& getBook(int);//��������� ������������� ����� �� ���������� �������

   Book** book;

protected:
private:
   std::vector<Book>mBook;//������ ������


};

#endif