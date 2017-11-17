/***********************************************************************
 * Module:  ReadingRoom.cs
 * Author:  Nabra
 * Purpose: Definition of the Class ReadingRoom
 ***********************************************************************/

using System;

public class ReadingRoom
{
   public void Menu()
   {
      // TODO: implement
   }
   
   public void AssesOfWiFi()
   {
      // TODO: implement
   }
    /// <summary>
    /// Конструктор за замовченням
    /// </summary>
   public ReadingRoom()//конструктор за замовченням
   {
       printScanner = new PrintScanner();
       priseOfScaning = 0;
       priseOfCopy = 0;
       stayOfWiFi = false;
       Console.WriteLine("ReadingRoom created standartly");
   }

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="read">Об*єкт, що копіюється</param>
   public ReadingRoom(ReadingRoom read)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
    printScanner = new PrintScanner(read.printScanner);
	priseOfScaning = read.priseOfScaning;
	priseOfCopy = read.priseOfCopy;
	stayOfWiFi = read.stayOfWiFi;
    Console.WriteLine("ReadingRoom created by copy");
}
   public PrintScanner printScanner;
   
   
   private int priseOfScaning
   {
       get
       {
           return priseOfScaning;
       }
       set
       {
           if (value < 0)
               priseOfScaning = 0;
           else
               priseOfScaning = value;
       }
   }
   private int priseOfCopy
   {
       get
       {
           return priseOfCopy;
       }
       set
       {
           if (value < 0)
               priseOfCopy = 0;
           else
               priseOfCopy = value;
       }
   }
   private bool stayOfWiFi { get; set; }
   private PrintScanner printer;

}