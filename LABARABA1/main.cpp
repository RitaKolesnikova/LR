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
		cout << "�������� ��������:" << endl;
		cout << "1. ����� ������ �����." << endl;
		cout << "2. ����� �������� �����." << endl;
		cout << "4. ����� ���� ��������" << endl;
		cout << "5. �������� ������" << endl;
		cout << "������� 0 ����� ����� �� ���������." << endl;
		cin >> n;

		if (n >= '0' && n < '4')
		{
			cout << "������� ����� �������: " << endl;
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