#include <cmath>
#include"KOMPLEX.h"


komplex::komplex() 
{
	double real = NULL;
	double fake = NULL;
	double pi = 3.1415926536;
}
komplex::komplex(double areal, double afake)
{
	double real = areal;
	double fake = afake;
}
komplex::komplex(const komplex &c)
{
	real = c.real;
	fake = c.fake;
}
komplex::~komplex(){}
komplex komplex::operator+(const komplex&ringt)
{
	return komplex(real + ringt.real, fake + ringt.fake);
}

void komplex::input()
{
	cout << "введите действительную часть y=";
	cin >> real;
	cout << "введите мнимую часть x*i=";
	cin >> fake;
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

