#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > NULL");
	int n;
	cout << "введите число:\n";
	cin >> n;

	int i = 1;
	for (i; i <= n; i++)
	{
		int x;
		x = n % i;
		if (x == 0 && i != 1 && i != n)
		{
			cout << "Ваше число не яляется простым!!!\n";
			break;
		}
	}
	if (i == (n + 1))
	{
		cout << "Ваше число простое!!!\n";
	}
}