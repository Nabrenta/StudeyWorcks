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
	int getStudy();//повернути максимальний час утримання навчальної літератури
	int getFiction();//повернути максимальній час утримання художньої літератури
	bool getElectric();//визначити наявність в бібліотеці струму
	void setElectric(bool);
	Catalog& getCatalog();
   void NewDay(void);
   void ChouseAction(void);
   void ChangeRool(void);
   void DefineElectric(void);
   void CreateFormular(void);
   void ChBook(int);
   void GhBook(int);

   Catalog** catalog;
   ReadingRoom** readingRoom;
   Librariar** librariar;
   UserList** userList;

protected:
private:
   int limitTimeStudy;//максимальний час утримання навчальної літератури
   int limitTimeFiction;//максимальній час утримання художньої літератури
   bool availElectric;//наявність в бібліотеці струму
   UserList mUserList;//список користувачів
   Catalog mCatalog;//каталог
   ReadingRoom mReadingRoom;//читальний зал
   Librariar mLibrariar;//бібліотекар
   void setStudy(int);//повернути максимальний час утримання навчальної літератури
   void setFiction(int);//повернути максимальній час утримання художньої літератури
};

#endif