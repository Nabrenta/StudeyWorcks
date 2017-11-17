/***********************************************************************
 * Module:  Librariar.cpp
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:45:44
 * Purpose: Implementation of the class Librariar
 ***********************************************************************/

#include "Librariar.h"
#include <iostream>

using namespace std;
class Book;
class User;

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

//повернути місце роботи бібліотекаря
worcker Librariar::getGroop()
{
	return groop;
}

//повернути місце роботи бібліотекаря
void Librariar::setGroop(int tipe)
{
	groop = (worcker)tipe;
}