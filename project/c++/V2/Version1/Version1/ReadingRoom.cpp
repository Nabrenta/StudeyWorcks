/***********************************************************************
 * Module:  ReadingRoom.cpp
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:45:08
 * Purpose: Implementation of the class ReadingRoom
 ***********************************************************************/

#include "PrintScanner.h"
#include "ReadingRoom.h"
#include <iostream>
using namespace std;

//=========== Конструктор за замовченням ===========
ReadingRoom::ReadingRoom()
	:printer()
{
	priseOfScaning = 0;
	priseOfCopy = 0;
	stayOfWiFi = false;
	cout << "ReadingRoom created standartly" << endl;
}

//=========== Конструктор копії ===========
ReadingRoom::ReadingRoom(const ReadingRoom& read)
//атрибути отриманого класу визначаються атрибтами вхідного класу
	:printer(read.printer)
{
	priseOfScaning = read.priseOfScaning;
	priseOfCopy = read.priseOfCopy;
	stayOfWiFi = read.stayOfWiFi;
	cout << "ReadingRoom created by copy" << endl;
}

//=========== Деструктор ===========
ReadingRoom::~ReadingRoom()
{
	cout << "ReadingRoom distroed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       ReadingRoom::Menu()
// Purpose:    Implementation of ReadingRoom::Menu()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ReadingRoom::Menu(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ReadingRoom::AssesOfWiFi()
// Purpose:    Implementation of ReadingRoom::AssesOfWiFi()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ReadingRoom::AssesOfWiFi(void)
{
   // TODO : implement
}