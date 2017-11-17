/***********************************************************************
 * Module:  Librariar.cs
 * Author:  Nabra
 * Purpose: Definition of the Class Librariar
 ***********************************************************************/

using System;

enum worcker { readroom, abonement }; //місце роботи

public class Librariar
{
   public void LoanBook()
   {
      // TODO: implement
   }
   
   public void PotBookBeck()
   {
      // TODO: implement
   }
   
   public void GiveServises()
   {
      // TODO: implement
   }
   
   public void GiveWiFi()
   {
      // TODO: implement
   }
    /// <summary>
    /// Конструктор за замовченням
    /// </summary>
    public	Librariar()//конструктор за замовченням
   {
       Groop = worcker.abonement;//місце роботи - абонемент
       Console.WriteLine("Librariar created standartly");
   }
    /// <summary>
    /// Конструктор перетворення типів
    /// </summary>
    /// <param name="i">Код місця роботи бібліотекаря</param>
	public Librariar(int i)//конструктор перетворення типів
    {
        Groop = (worcker)(i % 2);//код місця роботи - попередньо введене число
        Console.WriteLine("Librariar created by type change");
    }
    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="libr">Об*єкт, що копіюється</param>
    public Librariar(Librariar libr)//конструктор копії
    {
        Groop = libr.Groop;
        Console.WriteLine("Librariar created by copy");
    }
    private worcker Groop { get; set; }

}