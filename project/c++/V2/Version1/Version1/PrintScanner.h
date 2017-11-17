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
   void AssesOfPrinter(void);
   void AssesOfScaner(void);
   void PutPaper(void);
   void PutPaint(void);

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