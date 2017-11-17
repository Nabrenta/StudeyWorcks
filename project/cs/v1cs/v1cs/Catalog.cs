/***********************************************************************
 * Module:  Catalog.cs
 * Author:  Nadia Abrashina
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