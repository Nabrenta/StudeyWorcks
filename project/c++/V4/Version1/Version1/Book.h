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
   const std::string getName();//��������� ����� �����
  
   const std::string getSubj();//��������� ������� �����
   const bool getAvail();//���������, �� ����� ��������
   const limit getLimit();//��������� ��������� �� ������
   const date getDat();//��������� ���� ������
   const int getStay();//��������� ����
   const std::string getCode();//��������� ���������������� �����
   const int getCost();//��������� �������
   const types getType();//��������� ���
   void setDat(date);//������ ���� ������
   void setStay(int);//������ ����
   void setAvail(bool);//���������, �� ����� ��������
   void OutputInformation();

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
   inline void setName(std::string);//������ ����� �����
   inline void setSubj(std::string);//������ ������� �����
   inline void setLimit(int);//������ ��������� �� ������
   inline void setCode(std::string);//������ ���������������� �����
   inline void setCost(int);//������ �������
   inline void setType(int);//������ ���

};

#endif