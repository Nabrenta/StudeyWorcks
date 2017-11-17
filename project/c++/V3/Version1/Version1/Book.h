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
   std::string getName();//Повернути назву книги
   std::string getSubj();//Повернути предмет книги
   bool getAvail();//Визначиты
   limit getLimit();//повернути обмеження на видачу
   date getDat();//повернути дату видачі
   int getStay();//повернути стан
   std::string getCode();//повернути ідентифікаційний номер
   int getCost();//повернути вартість
   types getType();//повернути тип
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
   void setName(std::string);//змінити назву книги
   void setSubj(std::string);//змінити предмет книги
   void setLimit(int);//змінити обмеження на видачу
   void setCode(std::string);//змінити ідентифікаційний номер
   void setCost(int);//змінити вартість
   void setType(int);//змінити тип

};

#endif