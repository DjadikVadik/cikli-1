﻿#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > NULL");
	int n, // наше число
		i, // количество в нем цифр
		s, // сумма этих цифр
		j, // итератор цикла
		x; // значение разрядов
	cout << "введите число любой разрядности:\n";
	cin >> n;
	i = 0;
	s = 0;
	for (j = 10; j <= n; j *= 10)  //значение, сумма и количество всех разрядов кроме последнего
	{
		x = (n % j) / (j / 10);
		s += x;
		i++;
	}
	x = n / (j / 10);            // значение и сумма последнего разряда
	s += x;
	i++;
	cout << "число имеет " << i << " цыфр,\n"
		<< "сумма этих цыфр рана: " << s << "\n";
}