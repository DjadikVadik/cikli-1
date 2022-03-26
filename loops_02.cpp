#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251 >nul");
    int s = 0;
    int m, n;
    cout << "задайте диапазон чисел: сначала нижнюю границу, затем верхнюю.\n";
    cin >> m >> n;
    for (int i = m; i < n; i++)
    {
        s = s + i;
    }
    cout << "сумма всех чисел в диапазоне от " << m << " до " << n << " равна:\n" << s << "\n";
}