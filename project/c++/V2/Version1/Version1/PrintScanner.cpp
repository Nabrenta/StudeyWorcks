/***********************************************************************
 * Module:  PrintScanner.cpp
 * Author:  Nabra
 * Modified: 17 октября 2016 г. 17:56:57
 * Purpose: Implementation of the class PrintScanner
 ***********************************************************************/

#include "PrintScanner.h"
#include <iostream>
using namespace std;

//=========== Конструктор за замовченням ===========
PrintScanner::PrintScanner()
{
	stayOfPrinter = false;
	stayOfScanner = false;
	numbPaper = 0;
	numbPaint = 0;
	maxPaint = 0;
	maxPaper = 0;
	cout << "PrintScanner created standartly" << endl;
}

//=========== Конструктор копії ===========
PrintScanner::PrintScanner(const PrintScanner&prin)
{
	//атрибути отриманого класу визначаються атрибтами вхідного класу
	stayOfPrinter = prin.stayOfPrinter;
	stayOfScanner = prin.stayOfScanner;
	numbPaper = prin.numbPaper;
	numbPaint = prin.numbPaint;
	maxPaint = prin.maxPaint;
	maxPaper = prin.maxPaper;
	cout << "PrintScanner created by copy" << endl;
}

PrintScanner::~PrintScanner()
{
	cout << "PrintScanner distroed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::AssesOfPrinter()
// Purpose:    Implementation of PrintScanner::AssesOfPrinter()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::AssesOfPrinter(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::AssesOfScaner()
// Purpose:    Implementation of PrintScanner::AssesOfScaner()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::AssesOfScaner(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::PutPaper()
// Purpose:    Implementation of PrintScanner::PutPaper()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::PutPaper(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::PutPaint()
// Purpose:    Implementation of PrintScanner::PutPaint()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::PutPaint(void)
{
   // TODO : implement
}