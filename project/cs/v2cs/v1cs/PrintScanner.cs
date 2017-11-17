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
    /// Конструктор за замовченням
    /// </summary>
   public PrintScanner()//конструктор за замовченням
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
    /// Конструктор копії
    /// </summary>
    /// <param name="prin">Об*єкт, що копіюється</param>
   public PrintScanner(PrintScanner prin)
{
	//атрибути отриманого класу визначаються атрибтами вхідного класу
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