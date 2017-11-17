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

//��������� ��������� ��������
bool PrintScanner::getPrinter()
{
	return stayOfPrinter;
}

//��������� ��������� �������
bool PrintScanner::getScanner()
{
	return stayOfScanner;
}

//��������� ������� ������
int PrintScanner::getPaper()
{
	return numbPaper;
}

//��������� ����. ������� ������
int PrintScanner::getMPaper()
{
	return maxPaper;
}

//��������� ����. ������� �����
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

//������ �����
void PrintScanner::PutPaper(int numb/*��������� ������� ������ �����*/)
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

//������ ����
void PrintScanner::PutPaint(int numb/*������� �������� ������*/)
{
	if (numb <= maxPaint)
		numbPaint += numb;
	else
		numbPaint = maxPaint;
}

//��������� ����. ������� ������
void PrintScanner::setMPaper(int numb)
{
	maxPaper = numb;
}

//��������� ����. ������� �����
void PrintScanner::setMPaint(int numb)
{
	maxPaint = numb;
}
