/***********************************************************************
 * Module:  Library.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class Library
 ***********************************************************************/

using System;

public class Library
{
   public void NewDay()
   {
      // TODO: implement
   }
   
   public void ChouseAction()
   {
      // TODO: implement
   }
   
   public void ChangeRool()
   {
      // TODO: implement
   }
   
   public void DefineElectric()
   {
      // TODO: implement
   }
   
   public void CreateFormular()
   {
      // TODO: implement
   }

   public Catalog catalog;
   public ReadingRoom readingRoom;
   public System.Collections.ArrayList librariar;
   
   /// <pdGenerated>default getter</pdGenerated>
   public System.Collections.ArrayList GetLibrariar()
   {
      if (librariar == null)
         librariar = new System.Collections.ArrayList();
      return librariar;
   }
   
   /// <pdGenerated>default setter</pdGenerated>
   public void SetLibrariar(System.Collections.ArrayList newLibrariar)
   {
      RemoveAllLibrariar();
      foreach (Librariar oLibrariar in newLibrariar)
         AddLibrariar(oLibrariar);
   }
   
   /// <pdGenerated>default Add</pdGenerated>
   public void AddLibrariar(Librariar newLibrariar)
   {
      if (newLibrariar == null)
         return;
      if (this.librariar == null)
         this.librariar = new System.Collections.ArrayList();
      if (!this.librariar.Contains(newLibrariar))
         this.librariar.Add(newLibrariar);
   }
   
   /// <pdGenerated>default Remove</pdGenerated>
   public void RemoveLibrariar(Librariar oldLibrariar)
   {
      if (oldLibrariar == null)
         return;
      if (this.librariar != null)
         if (this.librariar.Contains(oldLibrariar))
            this.librariar.Remove(oldLibrariar);
   }
   
   /// <pdGenerated>default removeAll</pdGenerated>
   public void RemoveAllLibrariar()
   {
      if (librariar != null)
         librariar.Clear();
   }
   public UserList userList;

   private int limitTimeStudy;
   private int limitTimeFiction;
   private bool availElectric;
   private UserList mUserkist;
   private Catalog mCatalog;
   private ReadingRoom mReadingRoom;
   private Librariar mLibrariar;

}