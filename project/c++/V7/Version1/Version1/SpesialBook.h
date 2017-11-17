#include "Book.h"

class SpesialBook: public Book
{
public:
	void show();
	SpesialBook();
private:
	char message;
};