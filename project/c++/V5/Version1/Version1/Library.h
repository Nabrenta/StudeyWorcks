/***********************************************************************
 * Module:  Library.h
 * Author:  Nabra
 * Modified: 23 октября 2016 г. 21:47:35
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
	Library(bool);//конструктор (тип?)
	Library(int, int, bool, int);//конструктор ініціалізації
	Library(const Library&);//конструктор копії
	~Library();//деструктор
	inline int getStudy();//повернути максимальний час утримання навчальної літератури
	inline int getFiction();//повернути максимальній час утримання художньої літератури
	inline bool getElectric();//визначити наявність в бібліотеці струму
	Catalog& getCatalog();//отримання посилання на каталог
   void NewDay(void);
   void ChouseAction(void);//меню
   void ChangeRool(int);//зміна ролі бібліотекаря
   void DefineElectric(bool);//встановлення маркеру наявності струму
   void ChBook(int);//змінити книгу
   void GhBook(int);//вивести книгу
   const void hello();//константна функція
   void LoanBook(int, int);//видати книгу
   void PotBookBeck(int, int);//прийняти книгу

protected:
private:
   int limitTimeStudy;//максимальний час утримання навчальної літератури
   int limitTimeFiction;//максимальній час утримання художньої літератури
   bool availElectric;//наявність в бібліотеці струму
   UserList mUserList;//список користувачів
   Catalog mCatalog;//каталог
   ReadingRoom mReadingRoom;//читальний зал
   Librariar mLibrariar;//бібліотекар
   inline void setStudy(int);//повернути максимальний час утримання навчальної літератури
   inline void setFiction(int);//повернути максимальній час утримання художньої літератури
};

#endif