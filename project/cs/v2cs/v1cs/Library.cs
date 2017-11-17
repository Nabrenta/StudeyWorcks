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
   public Librariar librariar;
    /// <summary>
    /// Конструктор за замовченням
    /// </summary>
   public Library()//конструктор (тип?)
   {
       catalog = new Catalog();
       readingRoom = new ReadingRoom();
       librariar = new Librariar();
       userList = new UserList();
       limitTimeStudy = 0;//обмеження часу утримання навчальної літератури
       limitTimeFiction = 0;//отримання часу утримання художньої літератури
       availElectric = false;//наявність світла
       Console.WriteLine("Library created standartly");
   }
    /// <summary>
    /// Конструктор ініціалізації
    /// </summary>
    /// <param name="numb1">Максимальний термін утримання навчальої літератури</param>
    /// <param name="numb2">Максимальний термін утримання художньої літератури</param>
    /// <param name="light">Мобифікатор наявності струму</param>
    /// <param name="mode">Код типу бібліотекаря</param>
   public Library(int numb1, int numb2, bool light, int mode)//конструктор (тип?)
   {
       catalog = new Catalog();
       readingRoom = new ReadingRoom();
       librariar = new Librariar(mode);
       userList = new UserList();
       limitTimeStudy = numb1;//обмеження часу утримання навчальної літератури
       limitTimeFiction = numb2;//отримання часу утримання художньої літератури
       availElectric = false;//наявність світла
       Console.WriteLine("Library created by initialisation");
   }

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="lib">Об*єкт, що копіюється</param>
    public Library(Library lib)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
    catalog = new Catalog(lib.catalog);
    readingRoom = new ReadingRoom(lib.readingRoom);
    librariar = new Librariar(lib.librariar);
    userList = new UserList (lib.userList);
	limitTimeStudy = lib.limitTimeStudy;
	limitTimeFiction = lib.limitTimeFiction;
	availElectric = lib.availElectric;
	Console.WriteLine("Library created by copy");
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