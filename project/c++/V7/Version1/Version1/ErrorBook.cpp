#include "ErrorBook.h"
#include <iostream>
using namespace std;
class ErrorBook;

void ErrorBook::notFound()
{
	cerr << "Book not found!" << endl;
}

void EmptyCatalog::noBook()
{
	cerr << "No any book!" << endl;
}