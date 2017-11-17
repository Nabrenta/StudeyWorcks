/***********************************************************************
 * Module:  Library.h
 * Author:  Nabra
 * Modified: 23 окт€бр€ 2016 г. 21:47:35
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
   void NewDay(void);
   void ChouseAction(void);
   void ChangeRool(void);
   void DefineElectric(void);
   void CreateFormular(void);

   Catalog catalog;
   ReadingRoom readingRoom;
   Librariar** librariar;
   UserList userList;

protected:
private:
   int limitTimeStudy;
   int limitTimeFiction;
   bool availElectric;
   UserList mUserkist;
   Catalog mCatalog;
   ReadingRoom mReadingRoom;
   Librariar *mLibrariar;


};

#endif