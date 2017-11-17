/***********************************************************************
 * Module:  ReadingRoom.cpp
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:45:08
 * Purpose: Implementation of the class ReadingRoom
 ***********************************************************************/

#include "PrintScanner.h"
#include "ReadingRoom.h"
#include <iostream>
using namespace std;

//=========== ����������� �� ����������� ===========
ReadingRoom::ReadingRoom()
	:printer()
{
	priseOfScaning = 0;
	priseOfCopy = 0;
	stayOfWiFi = false;
	cout << "ReadingRoom created standartly" << endl;
}

//=========== ����������� ��ﳿ ===========
ReadingRoom::ReadingRoom(const ReadingRoom& read)
//�������� ���������� ����� ������������ ��������� �������� �����
	:printer(read.printer)
{
	priseOfScaning = read.priseOfScaning;
	priseOfCopy = read.priseOfCopy;
	stayOfWiFi = read.stayOfWiFi;
	cout << "ReadingRoom created by copy" << endl;
}

//=========== ���������� ===========
ReadingRoom::~ReadingRoom()
{
	cout << "ReadingRoom distroed" << endl;
}

//��������� ������� �����
int ReadingRoom::getScanPrise()
{
	return priseOfScaning;
}

//��������� ������� ��ﳿ
int ReadingRoom::getCopyPrise()
{
	return priseOfCopy;
}

//��������� ���� WiFi
bool ReadingRoom::getStayWiFi()
{
	return stayOfWiFi;
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

void ReadingRoom::AssesOfWiFi(bool asses)
{
	stayOfWiFi = asses;
}

//��������� ������� �����
void ReadingRoom::setScanPrise(int prise)
{
	priseOfScaning = prise;
}

//��������� ������� ��ﳿ
void ReadingRoom::setCopyPrise(int prise)
{
	priseOfCopy = prise;
}

//�������� ���� ��� ����������
void ReadingRoom::GiveServises(void)
{
	char ansv;//������� ��� �������
	int page;//������ �������
	char ansv1;//
	cout << "Do you want to get scun or copy (1/2)?" << endl;
	cin >> ansv;
	bool flag;//������ ���������
	if (ansv == '1')
		flag = printer.getScanner();
	else
		flag = printer.getPrinter();
	if (flag == true)
	{
		cout << "What page do you want to get?" << endl;
		cin >> page;
		cout << "Cost of work is ";
		if (ansv == '1')
			cout << this->getScanPrise() << endl;
		else
			cout << this->getCopyPrise() << endl;
		cout << "Do you want to continue (y/n)?" << endl;
		cin >> ansv1;
		if (ansv1 == 'y')
			pay();
		else
			cout << "See you next time!" << endl;
	}
	else
		cout << "We are sorry, but action is impossible, becouse devise is broken." << endl;
}

//������
void ReadingRoom::pay()
{
	char ansv;//�������
	cout << "Do you want to pay by card or by cash (1/2)?" << endl;
	cin >> ansv;
	if (ansv == '1')
		cout << "Payed by card" << endl;
	else
		cout << "Payed by cash" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Librariar::GiveWiFi()
// Purpose:    Implementation of Librariar::GiveWiFi()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ReadingRoom::GiveWiFi(void)
{
	// TODO : implement
}