/***********************************************************************
 * Module:  ReadingRoom.cs
 * Author:  Nadia Abrashina
 * Purpose: Definition of the Class ReadingRoom
 ***********************************************************************/

using System;

public class ReadingRoom
{
   public void Menu()
   {
      // TODO: implement
   }
   
   public void AssesOfWiFi()
   {
      // TODO: implement
   }
    /// <summary>
    /// ����������� �� �����������
    /// </summary>
   public ReadingRoom()//����������� �� �����������
   {
       printScanner = new PrintScanner();
       priseOfScaning = 0;
       priseOfCopy = 0;
       stayOfWiFi = false;
       Console.WriteLine("ReadingRoom created standartly");
   }

    /// <summary>
    /// ����������� ��ﳿ
    /// </summary>
    /// <param name="read">��*���, �� ���������</param>
   public ReadingRoom(ReadingRoom read)
//�������� ���������� ����� ������������ ��������� �������� �����
{
    printScanner = new PrintScanner(read.printScanner);
	priseOfScaning = read.priseOfScaning;
	priseOfCopy = read.priseOfCopy;
	stayOfWiFi = read.stayOfWiFi;
    Console.WriteLine("ReadingRoom created by copy");
}
   public PrintScanner printScanner;
   
   
   private int priseOfScaning;
   private int priseOfCopy;
   private bool stayOfWiFi;
   private PrintScanner printer;

}