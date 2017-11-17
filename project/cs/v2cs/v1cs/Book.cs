/***********************************************************************
 * Module:  Book.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class Book
 ***********************************************************************/

using System;
public enum limit { forAll, sinseOnly, ridRoomOnly };//обмеження доступу

public enum types { fiction, study };//тип книги

public struct date//дата
{
    public int day;//день
    public int month;//місяць
    public int year;//рік
};

public class Book
{
   public void DeleteBook()
   {
      // TODO: implement
   }
   
   public void ChangeBook()
   {
      // TODO: implement
   }

   /// <summary>
   /// Конструктор за замовченням
   /// </summary>
   public Book()//конструктор за замовченням
   {
       nameOfBook = "\0";//встановлення назви книги
       subject = "\0";//встановлення предметної області
       avail = false;//встановлення наявності книги
       limitAsses = limit.ridRoomOnly;//встановлення модифікатору доступу
       putDate.day = 0;//встановлення дати взяття
       putDate.month = 0;//встановлення місяця взяття
       putDate.year = 0;//встановлення року взятя
       stay = 0;//встановлення стану книги
       code = "\0";//встановлення номеру книги
       cost = 0;//встановлення вартості книги
       type = types.study;//встановлення типу видання
       Console.WriteLine("Book created standartly");
   }

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="otherBook">Об*єкт, що копіюється</param>
   public Book(Book otherBook)//конструктор копії
   {
       //атрибути отриманого класу визначаються атрибтами вхідного класу
       nameOfBook = otherBook.nameOfBook;
       subject = otherBook.subject;
       avail = otherBook.avail;
       limitAsses = otherBook.limitAsses;
       putDate.day = otherBook.putDate.day;
       putDate.month = otherBook.putDate.month;
       putDate.year = otherBook.putDate.year;
       stay = otherBook.stay;
       code = otherBook.code;
       cost = otherBook.cost;
       type = otherBook.type;
       Console.WriteLine("Book created by copy");
   }

    /// <summary>
    /// Конструктор ініціалізації
    /// </summary>
    /// <param name="name">Назва книги</param>
    /// <param name="subj">Предмет книги</param>
    /// <param name="availib">Модифікатор доступності книги</param>
    /// <param name="asses">Модифікатор обмежень доступу до книги</param>
    /// <param name="gateDate">Дата видачі</param>
    /// <param name="qality">Стан книги</param>
    /// <param name="codeNumber">Інвентарний номер</param>
    /// <param name="bookCost">Вартість</param>
    /// <param name="typeBook">Тип (навчальна чи художня література)</param>
    public Book(string name, string subj, bool availib, limit asses, date gateDate, int qality, string codeNumber, int bookCost, types typeBook)//конструктор ініціалізації
   {
       nameOfBook = name;//встановлення назви книги
       subject = subj;//встановлення предметної області
       avail = availib;//встановлення наявності книги
       limitAsses = asses;//встановлення модифікатору доступу
       putDate.day = gateDate.day;//встановлення дати взяття
       putDate.month = gateDate.month;//встановлення місяця взяття
       putDate.year = gateDate.year;//встановлення року взятя
       stay = qality;//встановлення стану книги
       code = codeNumber;//встановлення вартості книги
       cost = bookCost;//встановлення вартості книги
       type = typeBook;//встановлення типу видання
       Console.WriteLine("Book created by initialisation");
   }
   private string nameOfBook;
   private string subject;
   private bool avail;
   private limit limitAsses;
   private date putDate;
   private int stay;
   private string code;
   private int cost;
   private types type;

}