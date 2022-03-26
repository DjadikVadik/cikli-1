#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > NULL");
	int n;
	cout << "введите число:\n";
	cin >> n;

	cout << "ваше чило делится на:\n";
	for (int i = 1; i <= n; i++)
	{
		int x;
		x = n % i;
		if (x == 0)
		{
			cout << i << "\n";
		}
	}
}