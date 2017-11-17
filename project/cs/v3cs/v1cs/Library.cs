/***********************************************************************
 * Module:  Library.cs
 * Author:  Nabra
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
    /// ����������� �� �����������
    /// </summary>
   public Library()//����������� (���?)
   {
       catalog = new Catalog();
       readingRoom = new ReadingRoom();
       librariar = new Librariar();
       userList = new UserList();
       limitTimeStudy = 0;//��������� ���� ��������� ��������� ���������
       limitTimeFiction = 0;//��������� ���� ��������� �������� ���������
       availElectric = false;//�������� �����
       Console.WriteLine("Library created standartly");
   }
    /// <summary>
    /// ����������� �����������
    /// </summary>
    /// <param name="numb1">������������ ����� ��������� �������� ���������</param>
    /// <param name="numb2">������������ ����� ��������� �������� ���������</param>
    /// <param name="light">����������� �������� ������</param>
    /// <param name="mode">��� ���� ����������</param>
   public Library(int numb1, int numb2, bool light, int mode)//����������� (���?)
   {
       catalog = new Catalog();
       readingRoom = new ReadingRoom();
       librariar = new Librariar(mode);
       userList = new UserList();
       limitTimeStudy = numb1;//��������� ���� ��������� ��������� ���������
       limitTimeFiction = numb2;//��������� ���� ��������� �������� ���������
       availElectric = false;//�������� �����
       Console.WriteLine("Library created by initialisation");
   }

    /// <summary>
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="lib">��*���, �� ���������</param>
    public Library(Library lib)
//�������� ���������� ����� ������������ ��������� �������� �����
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

    public void defineData()
   {
       Console.WriteLine("Define limit time keeping study literature:");
       int i = Console.Read();
       limitTimeStudy = i;
       Console.WriteLine("Define limit time keeping study literature:");
       int j = Console.Read();
       Console.WriteLine("Define if electric availible (0/1)");
       int n = Console.Read();
       if (n == 0)
           availElectric = false;
       else
           availElectric = true;
   }

   private int limitTimeStudy
   {
       get
       {
           return limitTimeStudy;
       }
       set
       {
           if (value < 0)
               limitTimeStudy = 0;
           else
               limitTimeStudy = value;
       }
   }
   private int limitTimeFiction
   {
       get
       {
           return limitTimeFiction;
       }
       set
       {
           if (value < 0)
               limitTimeFiction = 0;
           else
               limitTimeFiction = value;
       }
   }
   private bool availElectric { get; set; }
}