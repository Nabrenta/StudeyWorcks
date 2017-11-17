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
	void AssesOfPrinter(bool);
	void AssesOfScaner(bool);
   void PutPaper(int);//������ ����
   void PutPaint(int);//������ �����
   void setMPaint(int);//���������� �������� �����
   void setMPaper(int);//���������� �������� ������
   bool getPrinter();//��������� ��������� ��������
   bool getScanner();//��������� ��������� �������
   int getPaint();//��������� ������� �����
   int getPaper();//��������� ������� ������
   int getMPaint();//��������� ����. ������� �����
   int getMPaper();//��������� ����. ������� ������

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