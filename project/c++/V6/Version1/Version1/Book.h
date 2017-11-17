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
	virtual void show();
   void ChangeBook(void);
   Book();//����������� �� �����������
   Book(const Book&);//����������� ��ﳿ
   Book(std::string name, std::string subj, bool availib, limit asses, date gateDate, int qality, std::string codeNumber, int bookCost, types typeBook);//����������� �����������
   std::string getName();//��������� ����� �����
   std::string getSubj();//��������� ������� �����
   bool getAvail();//���������, �� ����� ��������
   limit getLimit();//��������� ��������� �� ������
   date getDat();//��������� ���� ������
   int getStay();//��������� ����
   std::string getCode();//��������� ���������������� �����
   int getCost();//��������� �������
   types getType();//��������� ���
   void setDat(date);//������ ���� ������
   void setStay(int);//������ ����
   void setAvail(bool);//���������, �� ����� ��������
   void OutputInformation();//��������� ���������� ��� �����
   void setBook();//�������� ���������� ��� �����
   bool operator&& (const Book&);//"�"
   bool operator|| (const Book&);//"���"
   Book operator++();//��������� ���������
   Book operator--();//��������� ���������
   Book operator++(int);//��������� �����������
   Book operator--(int);//��������� �����������
   Book operator+(const Book&) const;
   Book& operator+=(const Book&);
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