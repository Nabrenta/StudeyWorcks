/***********************************************************************
 * Module:  User.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class User
 ***********************************************************************/

using System;

public enum groop { student, lecturer }; //���� ������������

public struct line
{
	public string bookcode;//��� �����
	public int daykept;//������ ��� ���� �� �����
	public bool onHend;//�� �����?
	public types booktype;//��� �����
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
    /// ����������� �� �����������
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
    /// ����������� �����������
    /// </summary>
    /// <param name="log">����</param>
    /// <param name="list">������ ����, ����� ������������ �����</param>
    /// <param name="numb1">ʳ������ ���� �� �����</param>
    /// <param name="numb2">ʳ������ �����</param>
    /// <param name="pass">������</param>
    /// <param name="uGroop">����� ������������</param>
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
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="us">��*���, �� ���������</param>
    public User(User us)
//�������� ���������� ����� ������������ ��������� �������� �����
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