/***********************************************************************
 * Module:  PrintScanner.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class PrintScanner
 ***********************************************************************/

using System;

public class PrintScanner
{
   public void AssesOfPrinter()
   {
      // TODO: implement
   }
   
   public void AssesOfScaner()
   {
      // TODO: implement
   }
   
   public void PutPaper()
   {
      // TODO: implement
   }
   
   public void PutPaint()
   {
      // TODO: implement
   }
    /// <summary>
    /// ����������� �� �����������
    /// </summary>
   public PrintScanner()//����������� �� �����������
   {
       stayOfPrinter = false;
       stayOfScanner = false;
       numbPaper = 0;
       numbPaint = 0;
       maxPaint = 0;
       maxPaper = 0;
       Console.WriteLine("PrintScanner created standartly");
   }

    /// <summary>
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="prin">��*���, �� ���������</param>
   public PrintScanner(PrintScanner prin)
{
	//�������� ���������� ����� ������������ ��������� �������� �����
	stayOfPrinter = prin.stayOfPrinter;
	stayOfScanner = prin.stayOfScanner;
	numbPaper = prin.numbPaper;
	numbPaint = prin.numbPaint;
	maxPaint = prin.maxPaint;
	maxPaper = prin.maxPaper;
    Console.WriteLine("PrintScanner created by copy");
}
   private bool stayOfPrinter;
   private int numbPaper;
   private int numbPaint;
   private int maxPaper;
   private int maxPaint;
   private bool stayOfScanner;

}