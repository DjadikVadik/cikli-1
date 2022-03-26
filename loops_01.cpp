#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251 >nul");
    cout << "список четных чисел от 1 до 100:\n";
    for (int i = 1; i < 100; i++)
    {
        int s = i % 2;
        if (s == 0)
        {
            cout << i << "\n";
        }
    }

}