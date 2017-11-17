/***********************************************************************
 * Module:  Catalog.h
 * Author:  Nabra
 * Modified: 19 октября 2016 г. 0:01:24
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
	Catalog(const std::vector<Book>&mBooks);//конструктор (тип?)
	Catalog(const Catalog&);//конструктор копії
	~Catalog();//деструктор
   void AddBook(void);
   void SearchByName(void);
   void SearchByPartname(void);
   void SearchBySubj(void);
   void LookAll(void);

   //Book** book;

protected:
private:
   std::vector<Book>mBook;//вектор книжок


};

#endif