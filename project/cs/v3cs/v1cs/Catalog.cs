/***********************************************************************
 * Module:  Catalog.cs
 * Author:  Nabra
 * Purpose: Definition of the Class Catalog
 ***********************************************************************/

using System;

public class Catalog
{
   public void AddBook()
   {
      // TODO: implement
   }
   
   public void SearchByName()
   {
      // TODO: implement
   }
   
   public void SearchByPartname()
   {
      // TODO: implement
   }
   
   public void SearchBySubj()
   {
      // TODO: implement
   }
   
   public void LookAll()
   {
      // TODO: implement
   }

    /// <summary>
    /// Конструктор за замовченням
    /// </summary>
   public Catalog()
{
    book = new System.Collections.ArrayList();
    Console.WriteLine("Catalog created standartly");
}

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="cat">Об*єкт, що копіюється</param>
   public  Catalog(Catalog cat)
{
    book = cat.book;
    Console.WriteLine("Catalog created by copy");
}


   public System.Collections.ArrayList book;
   
   /// <pdGenerated>default getter</pdGenerated>
   public System.Collections.ArrayList GetBook()
   {
      if (book == null)
         book = new System.Collections.ArrayList();
      return book;
   }
   
   /// <pdGenerated>default setter</pdGenerated>
   public void SetBook(System.Collections.ArrayList newBook)
   {
      RemoveAllBook();
      foreach (Book oBook in newBook)
         AddBook(oBook);
   }
   
   /// <pdGenerated>default Add</pdGenerated>
   public void AddBook(Book newBook)
   {
      if (newBook == null)
         return;
      if (this.book == null)
         this.book = new System.Collections.ArrayList();
      if (!this.book.Contains(newBook))
         this.book.Add(newBook);
   }
   
   /// <pdGenerated>default Remove</pdGenerated>
   public void RemoveBook(Book oldBook)
   {
      if (oldBook == null)
         return;
      if (this.book != null)
         if (this.book.Contains(oldBook))
            this.book.Remove(oldBook);
   }
   
   /// <pdGenerated>default removeAll</pdGenerated>
   public void RemoveAllBook()
   {
      if (book != null)
         book.Clear();
   }

   private Book[] Books;

}