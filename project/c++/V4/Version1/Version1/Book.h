/***********************************************************************
 * Module:  Book.h
 * Author:  Nabra
 * Modified: 23 октября 2016 г. 21:23:29
 * Purpose: Declaration of the class Book
 ***********************************************************************/

#if !defined(__ClassDiagram_Book_h)
#define __ClassDiagram_Book_h

#include<vector>

enum limit { forAll, sinseOnly, ridRoomOnly };//обмеження доступу

enum types { fiction, study };//тип книги

struct date//дата
{
	int day;//день
	int month;//місяць
	int year;//рік
};

class Book
{
public:
	~Book();//деструктор
   void ChangeBook(void);
   Book();//конструктор за замовченням
   Book(const Book&);//конструктор копії
   //Book(char name[], char subj[], bool availib, limit asses, date gateDate, int qality, char codeNumber[], int bookCost, types typeBook);//конструктор ініціалізації
   const std::string getName();//Повернути назву книги
  
   const std::string getSubj();//Повернути предмет книги
   const bool getAvail();//Визначити, чи книга доступна
   const limit getLimit();//повернути обмеження на видачу
   const date getDat();//повернути дату видачі
   const int getStay();//повернути стан
   const std::string getCode();//повернути ідентифікаційний номер
   const int getCost();//повернути вартість
   const types getType();//повернути тип
   void setDat(date);//змінити дату видачі
   void setStay(int);//змінити стан
   void setAvail(bool);//Визначити, чи книга доступна
   void OutputInformation();

protected:
private:
   std::string nameOfBook;//назва книги
   std::string subject;//назва предметної області
   bool avail;//модифікатор наявності
   limit limitAsses;//обмеження доступу
   date putDate;//дата взяття
   int stay;//стан
   std::string code;//номер
   int cost;//вартість
   types type;//тип (художня літратура чи навчальній посібник)
   inline void setName(std::string);//змінити назву книги
   inline void setSubj(std::string);//змінити предмет книги
   inline void setLimit(int);//змінити обмеження на видачу
   inline void setCode(std::string);//змінити ідентифікаційний номер
   inline void setCost(int);//змінити вартість
   inline void setType(int);//змінити тип

};

#endif