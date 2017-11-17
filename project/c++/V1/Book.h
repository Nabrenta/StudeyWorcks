/***********************************************************************
 * Module:  Book.h
 * Author:  Nabra
 * Modified: 23 окт€бр€ 2016 г. 21:23:29
 * Purpose: Declaration of the class Book
 ***********************************************************************/

#if !defined(__ClassDiagram_Book_h)
#define __ClassDiagram_Book_h

enum limit { forAll, sinseOnly, ridRoomOnly };//модиф≥катор видач≥

enum types { fiction, study };//тип книги

struct date//дата
{
	int day;//день
	int month;//м≥с€ць
	int year;//р≥к
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