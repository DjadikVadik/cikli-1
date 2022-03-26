#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");
	int n, f;
	cout << "введите натуральное число:\n";
	cin >> n;
	f = 1;
	if (n == 1 || n == 0)
	{
		cout << "факториал числа " << n << " равен: 1 \n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			f = f * i;
		}
		cout << "факториал числа " << n << " равен: " << f << "\n";
	}
}