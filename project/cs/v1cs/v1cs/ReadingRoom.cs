/***********************************************************************
 * Module:  ReadingRoom.cs
 * Author:  Nadia Abrashina
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

   public System.Collections.ArrayList printScanner;
   
   /// <pdGenerated>default getter</pdGenerated>
   public System.Collections.ArrayList GetPrintScanner()
   {
      if (printScanner == null)
         printScanner = new System.Collections.ArrayList();
      return printScanner;
   }
   
   /// <pdGenerated>default setter</pdGenerated>
   public void SetPrintScanner(System.Collections.ArrayList newPrintScanner)
   {
      RemoveAllPrintScanner();
      foreach (PrintScanner oPrintScanner in newPrintScanner)
         AddPrintScanner(oPrintScanner);
   }
   
   /// <pdGenerated>default Add</pdGenerated>
   public void AddPrintScanner(PrintScanner newPrintScanner)
   {
      if (newPrintScanner == null)
         return;
      if (this.printScanner == null)
         this.printScanner = new System.Collections.ArrayList();
      if (!this.printScanner.Contains(newPrintScanner))
         this.printScanner.Add(newPrintScanner);
   }
   
   /// <pdGenerated>default Remove</pdGenerated>
   public void RemovePrintScanner(PrintScanner oldPrintScanner)
   {
      if (oldPrintScanner == null)
         return;
      if (this.printScanner != null)
         if (this.printScanner.Contains(oldPrintScanner))
            this.printScanner.Remove(oldPrintScanner);
   }
   
   /// <pdGenerated>default removeAll</pdGenerated>
   public void RemoveAllPrintScanner()
   {
      if (printScanner != null)
         printScanner.Clear();
   }

   private int priseOfScaning;
   private int priseOfCopy;
   private bool stayOfWiFi;
   private PrintScanner printer;

}