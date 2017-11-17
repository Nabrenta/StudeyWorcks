#include <iostream>
#include <vector>
#include "Book.h"
#include "Catalog.h"
#include "ReadingRoom.h"
#include "PrintScanner.h"
#include "Librariar.h"
#include "Library.h"
#include "User.h"
#include "UserList.h"
using namespace std;
int main()
{
	{
		cout << "Model of sinse-tecknical librery worcking" << endl;
		cout << "Autor is Nadia Abrashina, IC-52 group, FICT, KPI" << endl;
		cout << "START OF MODELING" << endl;
		int fiction;//максимальний час утримання на руках художньої літератури
		int study;//максимальний час утримання на руках навчальних посібників
		char elect;//символ для введення рішення про наявність струму
		bool electric;//маркер наявності струму
		int librar;//код групи бібліотекаря
		//std::vector<Book> mbooks { {} };//перший вектор книг (ВИРІШИТИ ПИТАННЯ!!!)
		//std::vector<Book> mbooks1{ {} };//другий вектор книг (ВИРІШИТИ ПИТАННЯ!!!)
		cout << endl;
		cout << "CREATING STANDARTLY" << endl;
		Library lib(true);//створення бібліотеки за замовченням
		cout << endl;
		cout << "CREATING BY INITIALISATION" << endl;
		cout << "ENTERING INFORMATION:" << endl;
		cout << "Enter max time of taking study literature" << endl;
		cin >> study;
		cout << "Enter max time of taking fiction literature" << endl;
		cin >> fiction;
		cout << "Chouse if electric availible (y/n)" << endl;
		cin >> elect;
		if (elect == 'y')
			electric = true;
		else
			electric = false;
		cout << "Enter code of librariar (0 if it's librariar of reading room or 1 if it's librariar of abonement" << endl;
		cin >> librar;
		cout << "CREATING:" << endl;
		Library lib1(study, fiction, electric, librar);//створення бібліотеки конструктором ініціалізації
		cout << endl;
		cout << "CREATING BY COPY" << endl;
		Library lib2(lib1);//створння бібліотеки конструктором копії
		system("pause");
		cout << endl;
		char kay;
		do
		{
			lib.ChBook(1);
			cout << "Do you want to change other parametrs (y/n)?" << endl;
			cin >> kay;
		} while (kay == 'y');
		lib.GhBook(1);
		cout << "DESTROING" << endl;
	}
	cout << "END OF MODELING" << endl;
	system("pause");
}