#pragma once
#include<iostream>
using namespace std;

//Вариант № 9. Комплексные числа.
//Объект класса хранит действительную и мнимую часть комплексного числа.
//Предусмотреть методы вычисления модуля и аргумента.


class komplex
{
	double pi;
	double real;
	double fake;

public:
	komplex();
	komplex(double areal, double afake);
	komplex(const komplex &c);
	~komplex();
	void arg();
	void mod();
	komplex operator+(const komplex&rin);
	bool operator>=(const komplex&ring);
	bool operator<=(const komplex&ring);
	void input();
};
