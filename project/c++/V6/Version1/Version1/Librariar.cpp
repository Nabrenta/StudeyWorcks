/***********************************************************************
 * Module:  Librariar.cpp
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:45:44
 * Purpose: Implementation of the class Librariar
 ***********************************************************************/

#include "Librariar.h"
#include <iostream>

using namespace std;
class Book;
class User;

//=========== ����������� �� ����������� =========== 
Librariar::Librariar()
{
	groop = abonement;//���� ������ - ���������
	cout << "Librariar created standartly" << endl;
}

//=========== ����������� ������������ ���� =========== 
Librariar::Librariar(int i)
{
	groop = (worcker)(i%2);//��� ���� ������ - ���������� ������� �����
	cout << "Librariar created by type change" << endl;
}

//=========== ����������� ��ﳿ =========== 
Librariar::Librariar(const Librariar &libr)
{
	groop = libr.groop;
}

//=========== ���������� =========== 
Librariar::~Librariar()
{
	cout << "Librariar destroed" << endl;
}

//��������� ���� ������ ����������
worcker Librariar::getGroop()
{
	return groop;
}

//��������� ���� ������ ����������
void Librariar::setGroop(int tipe)
{
	groop = (worcker)tipe;
}