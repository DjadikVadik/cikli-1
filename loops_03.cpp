#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251 >nul");
    double m, n;
    cout << "задайте диапазон градусов по цельсию: сначала нижнюю границу, затем верхнюю.\n";
    cin >> m >> n;
    for (double C = m; C < n; C++)
    {
        double F = (C * (9 / 5)) + 32;
        cout << C << " градусов по цельсию = " << F << " градусов по фаренгейту\n";
    }

}