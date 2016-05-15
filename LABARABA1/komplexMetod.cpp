#include <cmath>
#include"KOMPLEX.h"


komplex::komplex() 
{
	double real = NULL;
	double fake = NULL;
	double pi = 3.1415926536;
	AbstractKomplex** nArr = new AbstractKomplex*[col + 1];
	for (int i = 0; i < col; i++)
		nArr[i] = Arr[i];
	nArr[col++] = this;
	if (Arr != NULL)
		delete[] Arr;
	Arr = nArr;
}
komplex::komplex(double areal, double afake)
{
	double real = areal;
	double fake = afake;
	AbstractKomplex** nArr = new AbstractKomplex*[col + 1];
	for (int i = 0; i < col; i++)
		nArr[i] = Arr[i];
	nArr[col++] = this;
	if (Arr != NULL)
		delete[] Arr;
	Arr = nArr;
}
komplex::komplex(const komplex &c)
{
	real = c.real;
	fake = c.fake;
}
komplex::~komplex()
{
	if (col == 1)
	{
		//	delete this;
		if (Arr != NULL)
			delete Arr;
		Arr = NULL;
		col--;
	}
	if (col - 1 > 0)
	{
		AbstractKomplex** nArr = new AbstractKomplex*[col - 1];
		for (int i = 0, j = 0; i < col; i++)
			if (Arr[i] != this)
				nArr[j++] = Arr[i];
		delete[] Arr;
		Arr = nArr;
		col--;
	}
}

komplex komplex::operator+(const komplex&ringt)
{
	return komplex(real + ringt.real, fake + ringt.fake);
}

bool komplex::operator>=(const komplex & ring)
{
	if (real >= ring.real, fake >= ring.fake)
		return true;
	else
	return false;
}

bool komplex::operator<=(const komplex & ring)
{
	if (real <= ring.real, fake <= ring.fake)
		return true;
	else
		return false;
}

bool komplex::operator==(const komplex & rin)
{
	if (real == rin.real, fake == rin.fake)
		return true;
	else
	return false;
}

void komplex::input()
{
	AbstractKomplex** nArr = new AbstractKomplex*[col + 1];
	cout << "введите действительную часть y=";
	cin >> real;
	if (real >= '0' && real <= '9')
	{
		cout << "Значение неверно,введите заново." << endl;
		cout << "введите действительную часть y=";
		cin >> real;
	}
	cout << "введите мнимую часть x*i=";
	cin >> fake;
	if (fake >= '0' && fake <= '9')
	{
		cout << "Значение неверно,введите заново." << endl;
		cout << "введите мнимую часть x*i=";
		cin >> fake;
	}
}

void komplex::showArr()
{
	for (int i = 0; i < col; i++)
		if (Arr[i] != NULL)
			for (int i = 0; i < col; i++)
			{
				cout << Arr[i];
			}
		else
			cout << "NULL" << endl;
}
void komplex::DelArr()
{
	int j;
	cout << "введите номер удаляемой записи" << endl;
	cin >> j;
	if (Arr[j] != NULL)
		delete Arr[j];
}
void komplex::arg()
{
	double f;
	if (real > 0){f = atan(fake / real);}
	if (real < 0)
	{
		if (fake > 0) { f == pi + atan(fake / real); }
		if (fake < 0) { f == -pi + atan(fake / real); }
		if (fake == 0) {f == pi;}
	}
	if (real == 0)
	{
		if (fake > 0) { f == pi / 2; }
		if (fake < 0) {f==-pi / 2;}
	}
	cout << "Аргумент z=" << real << "+" << fake << "*i" << "\t" << "Аргумент z=" << f << endl;
}
void komplex::mod()
{
	double m;
	m = sqrt(real*real + fake*fake);
	cout << "|z|=" << real << "+" << fake << "*i" << "\t" << "|z|=" << m << "\t";
}

