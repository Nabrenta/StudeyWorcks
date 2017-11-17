/***********************************************************************
 * Module:  Library.h
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:47:35
 * Purpose: Declaration of the class Library
 ***********************************************************************/

#if !defined(__ClassDiagram_Library_h)
#define __ClassDiagram_Library_h

class Catalog;
class ReadingRoom;
class Librariar;
class UserList;

#include "UserList.h"
#include "Catalog.h"
#include "ReadingRoom.h"
#include "Librariar.h"

class Library
{
public:
	Library(bool);//����������� (���?)
	Library(int, int, bool, int);//����������� �����������
	Library(const Library&);//����������� ��ﳿ
	~Library();//����������
	inline int getStudy();//��������� ������������ ��� ��������� ��������� ���������
	inline int getFiction();//��������� ����������� ��� ��������� �������� ���������
	inline bool getElectric();//��������� �������� � �������� ������
	Catalog& getCatalog();//��������� ��������� �� �������
   void NewDay(void);
   void ChouseAction(void);//����
   void ChangeRool(int);//���� ��� ����������
   void DefineElectric(bool);//������������ ������� �������� ������
   void ChBook(int);//������ �����
   void GhBook(int);//������� �����
   const void hello();//���������� �������
   void LoanBook(int, int);//������ �����
   void PotBookBeck(int, int);//�������� �����

protected:
private:
   int limitTimeStudy;//������������ ��� ��������� ��������� ���������
   int limitTimeFiction;//����������� ��� ��������� �������� ���������
   bool availElectric;//�������� � �������� ������
   UserList mUserList;//������ ������������
   Catalog mCatalog;//�������
   ReadingRoom mReadingRoom;//��������� ���
   Librariar mLibrariar;//���������
   inline void setStudy(int);//��������� ������������ ��� ��������� ��������� ���������
   inline void setFiction(int);//��������� ����������� ��� ��������� �������� ���������
};

#endif