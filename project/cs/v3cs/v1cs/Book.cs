/***********************************************************************
 * Module:  Book.cs
 * Author:  Nabra
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
    date getDat()
    {
	    return putDate;
    }
    void setDat(date dat)
    {
	    putDate.day = dat.day;
	    putDate.month = dat.month;
	    putDate.year = dat.year;
    }
   private string nameOfBook {get; set;}
   private string subject { get; set; }
   private bool avail { get; set; }
   private limit limitAsses { get; set; }
   private date putDate;
   private int stay
   {
       get
       {
           return stay;
       }
       set
       {
           if (value > 5)
               stay = 5;
           else if (value < 0)
               stay = 0;
           else
               stay = value;
       }
   }
   private string code { get; set; }
   private int cost
   {
       get
       {
           return cost;
       }
       set
       {
           if (value < 0)
               cost = 0;
           else
               cost = value;
       }
   }
   private types type { get; set; }

}