/***********************************************************************
 * Module:  Book.h
 * Author:  Nabra
 * Modified: 23 ������� 2016 �. 21:23:29
 * Purpose: Declaration of the class Book
 ***********************************************************************/

#if !defined(__ClassDiagram_Book_h)
#define __ClassDiagram_Book_h

enum limit { forAll, sinseOnly, ridRoomOnly };//����������� ������

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
   void DeleteBook(void);
   void ChangeBook(void);

protected:
private:
   char nameOfBook[256];
   char subject[256];
   bool avail;
   limit limitAsses;
   date putDate;
   int state;
   char code[256];
   int cost;
   types type;


};

#endif