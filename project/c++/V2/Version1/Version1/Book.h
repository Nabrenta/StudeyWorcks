/***********************************************************************
 * Module:  Book.h
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:23:29
 * Purpose: Declaration of the class Book
 ***********************************************************************/

#if !defined(__ClassDiagram_Book_h)
#define __ClassDiagram_Book_h

#include<vector>

enum limit { forAll, sinseOnly, ridRoomOnly };//��������� �������

enum types { fiction, study };//��� �����

struct date//����
{
	int day;//����
	int month;//�����
	int year;//��
};

class Book
{
public:
	~Book();//����������
   void ChangeBook(void);
   Book();//����������� �� �����������
   Book(const Book&);//����������� ��ﳿ
   //Book(char name[], char subj[], bool availib, limit asses, date gateDate, int qality, char codeNumber[], int bookCost, types typeBook);//����������� �����������

protected:
private:
   std::string nameOfBook;//����� �����
   std::string subject;//����� ��������� ������
   bool avail;//����������� ��������
   limit limitAsses;//��������� �������
   date putDate;//���� ������
   int stay;//����
   std::string code;//�����
   int cost;//�������
   types type;//��� (������� �������� �� ��������� �������)


};

#endif