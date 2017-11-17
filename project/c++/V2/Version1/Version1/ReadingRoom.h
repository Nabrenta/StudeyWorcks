/***********************************************************************
 * Module:  ReadingRoom.h
 * Author:  Nabra
 * Modified: 20 октября 2016 г. 1:45:08
 * Purpose: Declaration of the class ReadingRoom
 ***********************************************************************/

#if !defined(__ClassDiagram_ReadingRoom_h)
#define __ClassDiagram_ReadingRoom_h

class PrintScanner;

#include "PrintScanner.h"

class ReadingRoom
{
public:
	ReadingRoom();//конструктор за замовченням
	ReadingRoom(const ReadingRoom&);//конструктор копії
	~ReadingRoom();//деструктор
   void Menu(void);
   void AssesOfWiFi(void);

 /*  PrintScanner** printScanner;*/

protected:
private:
   int priseOfScaning;//вартість скану
   int priseOfCopy;//вартість копії
   bool stayOfWiFi;//маркер стану WiFi
   PrintScanner* printer;//принт-сканер


};

#endif