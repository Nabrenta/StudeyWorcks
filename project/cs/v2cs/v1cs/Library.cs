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

   private int limitTimeStudy;
   private int limitTimeFiction;
   private bool availElectric;
   private UserList mUserkist;
   private Catalog mCatalog;
   private ReadingRoom mReadingRoom;
   private Librariar mLibrariar;

}