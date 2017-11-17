/***********************************************************************
 * Module:  Book.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class Book
 ***********************************************************************/

using System;
public enum limit { forAll, sinseOnly, ridRoomOnly };//��������� �������

public enum types { fiction, study };//��� �����

public struct date//����
{
    public int day;//����
    public int month;//�����
    public int year;//��
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
   /// ����������� �� �����������
   /// </summary>
   public Book()//����������� �� �����������
   {
       nameOfBook = "\0";//������������ ����� �����
       subject = "\0";//������������ ��������� ������
       avail = false;//������������ �������� �����
       limitAsses = limit.ridRoomOnly;//������������ ������������ �������
       putDate.day = 0;//������������ ���� ������
       putDate.month = 0;//������������ ����� ������
       putDate.year = 0;//������������ ���� �����
       stay = 0;//������������ ����� �����
       code = "\0";//������������ ������ �����
       cost = 0;//������������ ������� �����
       type = types.study;//������������ ���� �������
       Console.WriteLine("Book created standartly");
   }

    /// <summary>
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="otherBook">��*���, �� ���������</param>
   public Book(Book otherBook)//����������� ��ﳿ
   {
       //�������� ���������� ����� ������������ ��������� �������� �����
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
    /// ����������� �����������
    /// </summary>
    /// <param name="name">����� �����</param>
    /// <param name="subj">������� �����</param>
    /// <param name="availib">����������� ���������� �����</param>
    /// <param name="asses">����������� �������� ������� �� �����</param>
    /// <param name="gateDate">���� ������</param>
    /// <param name="qality">���� �����</param>
    /// <param name="codeNumber">����������� �����</param>
    /// <param name="bookCost">�������</param>
    /// <param name="typeBook">��� (��������� �� ������� ���������)</param>
    public Book(string name, string subj, bool availib, limit asses, date gateDate, int qality, string codeNumber, int bookCost, types typeBook)//����������� �����������
   {
       nameOfBook = name;//������������ ����� �����
       subject = subj;//������������ ��������� ������
       avail = availib;//������������ �������� �����
       limitAsses = asses;//������������ ������������ �������
       putDate.day = gateDate.day;//������������ ���� ������
       putDate.month = gateDate.month;//������������ ����� ������
       putDate.year = gateDate.year;//������������ ���� �����
       stay = qality;//������������ ����� �����
       code = codeNumber;//������������ ������� �����
       cost = bookCost;//������������ ������� �����
       type = typeBook;//������������ ���� �������
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