/***********************************************************************
 * Module:  User.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class User
 ***********************************************************************/

using System;

public enum groop { student, lecturer }; //гупа користувачів

public struct line
{
	public string bookcode;//код книги
	public int daykept;//скільки днів була на руках
	public bool onHend;//на руках?
	public types booktype;//тип книги
};

public class User
{
   public void findDebts()
   {
      // TODO: implement
   }
   
   public void NumbOfBook()
   {
      // TODO: implement
   }
    /// <summary>
    /// Конструктор за замовченням
    /// </summary>
    public User()
{
	login = "\0";
	bookList = new line[100];
	numberOfBook = 0;
	numberOfDebts = 0;
	password = "\0";
	userGroop = groop.student;
    Console.WriteLine("User created standartly");
}
    /// <summary>
    /// Конструктор ініціалізації
    /// </summary>
    /// <param name="log">Логін</param>
    /// <param name="list">Список книг, якими користувався читач</param>
    /// <param name="numb1">Кількість книг на руках</param>
    /// <param name="numb2">Кількість боргів</param>
    /// <param name="pass">Пароль</param>
    /// <param name="uGroop">Група користувачів</param>
	public User(string log, line[] list, int numb1, int numb2, string pass, groop uGroop)
    {
        login = log;
        bookList = list;
	    numberOfBook = numb1;
	    numberOfDebts = numb2;
	    password = pass;
	    userGroop = uGroop;
	    Console.WriteLine("User initialisated by initialisation");
    }

    /// <summary>
    /// Конструктор копії
    /// </summary>
    /// <param name="us">Об*єкт, що копіюється</param>
    public User(User us)
//атрибути отриманого класу визначаються атрибтами вхідного класу
{
	login = us.login;
	bookList = us.bookList;
	numberOfBook = us.numberOfBook;
	numberOfDebts = us.numberOfDebts;
	password = us.password;
	userGroop = us.userGroop;
    Console.WriteLine("User created by copy");
}
   private string login;
   private line[] bookList;
   private int numberOfBook;
   private int numberOfDebts;
   private string password;
   private groop userGroop;

}