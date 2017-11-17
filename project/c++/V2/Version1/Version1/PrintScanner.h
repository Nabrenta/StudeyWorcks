/***********************************************************************
 * Module:  PrintScanner.h
 * Author:  Nabra
 * Modified: 17 ������� 2016 �. 17:56:57
 * Purpose: Declaration of the class PrintScanner
 ***********************************************************************/

#if !defined(__ClassDiagram_PrintScanner_h)
#define __ClassDiagram_PrintScanner_h

class PrintScanner
{
public:
	PrintScanner();//����������� �� �����������
	PrintScanner(const PrintScanner&);//����������� ��ﳿ
	~PrintScanner();//����������
   void AssesOfPrinter(void);
   void AssesOfScaner(void);
   void PutPaper(void);
   void PutPaint(void);

protected:
private:
   bool stayOfPrinter;//������ ��������� ��������
   int numbPaper;//������� ������
   int numbPaint;//������� �����
   int maxPaper;//�������� ������� ������
   int maxPaint;//�������� ������� �����
   bool stayOfScanner;//������ ��������� �������


};

#endif