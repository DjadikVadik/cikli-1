﻿#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > NULL");
	int n, // наше число
		j, // итератор цикла
		i, // значение предидущего разряда
		x; // значение текущего
	cout << "введите число любой разрядности:\n";
	cin >> n;

	i = 10;  // задаем i любое значение которым не может быть x, чтобы осуществить первый цикл

	for (j = 10; j <= n; j *= 10)
	{
		x = (n % j) / (j / 10);
		if (x == i)
		{
			goto link;
			break;
		}
		i = x;
	}
	x = n / (j / 10);

link:
	if (x == i)
	{
		cout << "Во введённом числе есть одинаковые цыфры идущие подряд\n";
	}
	else
	{
		cout << "Во введённом числе нет одинаковых цыфр идущих подряд\n";
	}
}