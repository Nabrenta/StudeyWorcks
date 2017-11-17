/***********************************************************************
 * Module:  ReadingRoom.h
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:45:08
 * Purpose: Declaration of the class ReadingRoom
 ***********************************************************************/

#if !defined(__ClassDiagram_ReadingRoom_h)
#define __ClassDiagram_ReadingRoom_h

class PrintScanner;

#include "PrintScanner.h"

class ReadingRoom
{
public:
	ReadingRoom();//����������� �� �����������
	ReadingRoom(const ReadingRoom&);//����������� ��ﳿ
	~ReadingRoom();//����������
   void Menu(void);
   void AssesOfWiFi(void);

 /*  PrintScanner** printScanner;*/

protected:
private:
   int priseOfScaning;//������� �����
   int priseOfCopy;//������� ��ﳿ
   bool stayOfWiFi;//������ ����� WiFi
   PrintScanner* printer;//�����-������


};

#endif