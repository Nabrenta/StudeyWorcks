/***********************************************************************
 * Module:  Librariar.cs
 * Author:  Nabra
 * Purpose: Definition of the Class Librariar
 ***********************************************************************/

using System;

enum worcker { readroom, abonement }; //���� ������

public class Librariar
{
   public void LoanBook()
   {
      // TODO: implement
   }
   
   public void PotBookBeck()
   {
      // TODO: implement
   }
   
   public void GiveServises()
   {
      // TODO: implement
   }
   
   public void GiveWiFi()
   {
      // TODO: implement
   }
    /// <summary>
    /// ����������� �� �����������
    /// </summary>
    public	Librariar()//����������� �� �����������
   {
       Groop = worcker.abonement;//���� ������ - ���������
       Console.WriteLine("Librariar created standartly");
   }
    /// <summary>
    /// ����������� ������������ ����
    /// </summary>
    /// <param name="i">��� ���� ������ ����������</param>
	public Librariar(int i)//����������� ������������ ����
    {
        Groop = (worcker)(i % 2);//��� ���� ������ - ���������� ������� �����
        Console.WriteLine("Librariar created by type change");
    }
    /// <summary>
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="libr">��*���, �� ���������</param>
    public Librariar(Librariar libr)//����������� ��ﳿ
    {
        Groop = libr.Groop;
        Console.WriteLine("Librariar created by copy");
    }
    private worcker Groop { get; set; }

}