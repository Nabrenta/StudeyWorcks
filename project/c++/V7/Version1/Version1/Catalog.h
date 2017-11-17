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
   void AddBook();//додавання книги
   int SearchByCode(std::string);//пошук за колом
   void SearchByName(void);//пошук за назвою
   void SearchByPartname(void);
   void SearchBySubj(void);//пошук за предметом
   void LookAll(void);//переглянути усе
   void CBook(int);
   void GBook(int);
   void setBook(int);
   void operReload(int book1, int book2);
   Book& getBook(int);//повернути ідентифікатор книги за зазначеним номером

   Book** book;

protected:
private:
   std::vector<Book>mBook;//вектор книжок


};

#endif