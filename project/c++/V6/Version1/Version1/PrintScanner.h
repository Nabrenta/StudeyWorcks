/***********************************************************************
 * Module:  PrintScanner.h
 * Author:  Nabra
 * Modified: 17 октября 2016 г. 17:56:57
 * Purpose: Declaration of the class PrintScanner
 ***********************************************************************/

#if !defined(__ClassDiagram_PrintScanner_h)
#define __ClassDiagram_PrintScanner_h

class PrintScanner
{
public:
	PrintScanner();//конструктор за замовченням
	PrintScanner(const PrintScanner&);//конструктор копії
	~PrintScanner();//деструктор
	void AssesOfPrinter(bool);
	void AssesOfScaner(bool);
   void PutPaper(int);//Додати папір
   void PutPaint(int);//Додати фарбу
   void setMPaint(int);//Встановити максимум фарби
   void setMPaper(int);//Встановити максимум паперу
   bool getPrinter();//визначити справність принтера
   bool getScanner();//визначити справність сканера
   int getPaint();//повернути кількість фарби
   int getPaper();//повернути кількість паперу
   int getMPaint();//повернути макс. кількість фарби
   int getMPaper();//повернути макс. кількість паперу

protected:
private:
   bool stayOfPrinter;//маркер справності принтера
   int numbPaper;//кількість паперу
   int numbPaint;//кількість фарби
   int maxPaper;//гранична кількість паперу
   int maxPaint;//гранична кількість фарби
   bool stayOfScanner;//маркер справності сканера


};

#endif