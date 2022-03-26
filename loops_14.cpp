# include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int n,        // число, которое необходимо перевести
		i,        // итератор цикла
		z,        // значение n для двоичной системы
		x,        // значение n для 8-ричной системы
		w;        // значение n для 16-ричной системы

	cout << "Введите необходимое число:\n";
	cin >> n;
	z = n;
	i = 1;
	cout << "Наше число в двоичной системе исчисления:\n";
	for (i; i <= z; i *= 2);
	for (i = i / 2; i >= 1; i /= 2)
	{
		int a;
		a = z / i;
		cout << a;
		z = z - (a * i);
	}

	x = n;
	i = 1;
	cout << "\n\nНаше число в 8-ричной системе:\n";
	for (i; i <= x; i *= 8);
	for (i = i / 8; i >= 1; i /= 8)
	{
		int a;
		a = x / i;
		cout << a;
		x = x - (a * i);
	}

	w = n;
	i = 1;
	cout << "\n\nНаше число в 16-ричной системе:\n";
	for (i; i <= w; i *= 16);
	for (i = i / 16; i >= 1; i /= 16)
	{
		int a;
		a = w / i;
		a == 10 ? cout << "A"
			: a == 11 ? cout << "B"
			: a == 12 ? cout << "C"
			: a == 13 ? cout << "D"
			: a == 14 ? cout << "E"
			: a == 15 ? cout << "F"
			: cout << a;
		w = w - (a * i);
	}
	cout << "\n\n";
}