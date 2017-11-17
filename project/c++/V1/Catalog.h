/***********************************************************************
 * Module:  Catalog.h
 * Author:  Nabra
 * Modified: 19 окт€бр€ 2016 г. 0:01:24
 * Purpose: Declaration of the class Catalog
 ***********************************************************************/

#if !defined(__ClassDiagram_Catalog_h)
#define __ClassDiagram_Catalog_h

class Book;

#include "Book.h"

class Catalog
{
public:
   void AddBook(void);
   void SearchByName(void);
   void SearchByPartname(void);
   void SearchBySubj(void);
   void LookAll(void);

   Book** book;

protected:
private:
   Book *Books;


};

#endif