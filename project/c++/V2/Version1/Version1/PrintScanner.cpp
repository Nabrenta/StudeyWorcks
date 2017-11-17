/***********************************************************************
 * Module:  PrintScanner.cpp
 * Author:  Nabra
 * Modified: 17 ������� 2016 �. 17:56:57
 * Purpose: Implementation of the class PrintScanner
 ***********************************************************************/

#include "PrintScanner.h"
#include <iostream>
using namespace std;

//=========== ����������� �� ����������� ===========
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

//=========== ����������� ��ﳿ ===========
PrintScanner::PrintScanner(const PrintScanner&prin)
{
	//�������� ���������� ����� ������������ ��������� �������� �����
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