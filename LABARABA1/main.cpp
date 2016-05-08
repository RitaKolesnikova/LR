#include"KOMPLEX.h"
using namespace std;



void menu()
{
	int j;
	int col = 2;
	komplex**p = new komplex*[col];
	for (int i = 0; i < col; i++)
	{
		p[i] = NULL;
	}
	char n = 0;
	while (n != '0')
	{
		cout << "Выберите действие:" << endl;
		cout << "1. Найти модуль чисел." << endl;
		cout << "2. найти аргумент чисел." << endl;
		cout << "4. Вывод всех значений" << endl;
		cout << "5. Удаление записи" << endl;
		cout << "Нажмите 0 чтобы выйти из программы." << endl;
		cin >> n;
		
		if (n >= '0' && n < '4')
		{
			cout << "Введите номер позиции: " << endl;
			cin >> j;
		}
			switch (n)
			{
		case '1':
			if (p[j] == NULL)
				p[j] = new komplex();
			    p[j]->input();
			    p[j]->mod();
			break;
		case '2':
			if (p[j] == NULL)
				p[j] = new komplex();
				p[j]->input();
				p[j]->arg();
			break;
		case '4':
			for (int i = 0; i < col; i++)
				if (p[i] != NULL)
					for (int i = 0; i < col; i++)
					{
						cout<<p[i];
					}
				else
					cout << "NULL" << endl;
			break;
		case '5':
			cout << "введите номер удаляемой записи" << endl;
			cin >> j;
			if (p[j] != NULL)
				delete p[j];
			break;
		default:
			cout << "Goodbye\n";
			break;
		}
	}
	for (int i = 0; i < col; i++)
	{
		delete p[i];
	}
	delete[] p;
}
void main()
{
	setlocale(LC_ALL, "rus");
	menu();
	system("pause");
}