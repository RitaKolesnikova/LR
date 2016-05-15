#include"KOMPLEX.h"
using namespace std;

AbstractKomplex** komplex::Arr = NULL;
int komplex::col = 0;

void menu()
{
	int j;
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
			new komplex;
			&komplex::input;
			&komplex::mod;
			break;
		case '2':
			new komplex;
			&komplex::input;
			&komplex::arg;
			break;
			case '4':
				&komplex::showArr;
				break;
			case '5':
				&komplex::DelArr;
				break;
			default:
				cout << "Goodbye\n";
				break;
		}
	}
}
void main()
{
	setlocale(LC_ALL, "rus");
	menu();
	system("pause");
}