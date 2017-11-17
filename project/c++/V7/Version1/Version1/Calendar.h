#if !defined(Calendar_h)
#define Calendar_h
#include "Book.h"

class Calendar
{
public:
	virtual void NewDay() = 0;//чисто віртуальна функція

	Calendar();//конструктор за замовченням
protected:

};

#endif