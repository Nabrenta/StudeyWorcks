/***********************************************************************
 * Module:  Librariar.cpp
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:45:44
 * Purpose: Implementation of the class Librariar
 ***********************************************************************/

#include "Librariar.h"
#include <iostream>

using namespace std;

//=========== Конструктор за замовченням =========== 
Librariar::Librariar()
{
	groop = abonement;//місце роботи - абонемент
	cout << "Librariar created standartly" << endl;
}

//=========== Конструктор перетворення типів =========== 
Librariar::Librariar(int i)
{
	groop = (worcker)(i%2);//код місця роботи - попередньо введене число
	cout << "Librariar created by type change" << endl;
}

//=========== Конструктор копії =========== 
Librariar::Librariar(const Librariar &libr)
{
	groop = libr.groop;
}

//=========== Деструктор =========== 
Librariar::~Librariar()
{
	cout << "Librariar destroed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::LoanBook()
// Purpose:    Implementation of Librariar::LoanBook()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Librariar::LoanBook(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::PotBookBeck()
// Purpose:    Implementation of Librariar::PotBookBeck()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Librariar::PotBookBeck(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::GiveServises()
// Purpose:    Implementation of Librariar::GiveServises()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Librariar::GiveServises(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::GiveWiFi()
// Purpose:    Implementation of Librariar::GiveWiFi()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Librariar::GiveWiFi(void)
{
   // TODO : implement
}