/***********************************************************************
 * Module:  Librariar.h
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:45:44
 * Purpose: Declaration of the class Librariar
 ***********************************************************************/

#if !defined(__ClassDiagram_Librariar_h)
#define __ClassDiagram_Librariar_h

enum worcker {readroom, abonement}; //місце роботи

class Librariar
{
public:
	Librariar();//конструктор за замовченням
	Librariar(int);//конструктор перетворення типів
	Librariar(const Librariar&);//конструктор копії
	~Librariar();//деструктор
	worcker getGroop();//повернути місце роботи бібліотекаря
	void setGroop(int);//змінити місце роботи бібліотекаря
   void LoanBook(void);
   void PotBookBeck(void);

protected:
private:
   worcker groop;//місце роботи


};

#endif