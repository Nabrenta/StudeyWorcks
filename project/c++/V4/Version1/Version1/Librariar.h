/***********************************************************************
 * Module:  Librariar.h
 * Author:  Nabra
 * Modified: 20 ������� 2016 �. 1:45:44
 * Purpose: Declaration of the class Librariar
 ***********************************************************************/

#if !defined(__ClassDiagram_Librariar_h)
#define __ClassDiagram_Librariar_h

enum worcker {readroom, abonement}; //���� ������

class Librariar
{
public:
	Librariar();//����������� �� �����������
	Librariar(int);//����������� ������������ ����
	Librariar(const Librariar&);//����������� ��ﳿ
	~Librariar();//����������
	worcker getGroop();//��������� ���� ������ ����������
	void setGroop(int);//������ ���� ������ ����������
   void LoanBook(void);
   void PotBookBeck(void);

protected:
private:
   worcker groop;//���� ������


};

#endif