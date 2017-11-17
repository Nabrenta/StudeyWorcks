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

//визначити справність принтера
bool PrintScanner::getPrinter()
{
	return stayOfPrinter;
}

//визначити справність сканера
bool PrintScanner::getScanner()
{
	return stayOfScanner;
}

//повернути кількість паперу
int PrintScanner::getPaper()
{
	return numbPaper;
}

//повернути макс. кількість паперу
int PrintScanner::getMPaper()
{
	return maxPaper;
}

//повернути макс. кількість фарби
int PrintScanner::getMPaint()
{
	return maxPaint;
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::AssesOfPrinter()
// Purpose:    Implementation of PrintScanner::AssesOfPrinter()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::AssesOfPrinter(bool asses)
{
	stayOfPrinter = asses;
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::AssesOfScaner()
// Purpose:    Implementation of PrintScanner::AssesOfScaner()
// Return:     void
////////////////////////////////////////////////////////////////////////

void PrintScanner::AssesOfScaner(bool asses)
{
	stayOfScanner = asses;
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::PutPaper()
// Purpose:    Implementation of PrintScanner::PutPaper()
// Return:     void
////////////////////////////////////////////////////////////////////////

//додати фарбу
void PrintScanner::PutPaper(int numb/*повернути кількість доданої фарби*/)
{
	if (numb <= maxPaper)
		numbPaper += numb;
	else
		numbPaper = maxPaper;
}

////////////////////////////////////////////////////////////////////////
// Name:       PrintScanner::PutPaint()
// Purpose:    Implementation of PrintScanner::PutPaint()
// Return:     void
////////////////////////////////////////////////////////////////////////

//додати папір
void PrintScanner::PutPaint(int numb/*кількість доданого паперу*/)
{
	if (numb <= maxPaint)
		numbPaint += numb;
	else
		numbPaint = maxPaint;
}

//повернути макс. кількість паперу
void PrintScanner::setMPaper(int numb)
{
	maxPaper = numb;
}

//повернути макс. кількість фарби
void PrintScanner::setMPaint(int numb)
{
	maxPaint = numb;
}
