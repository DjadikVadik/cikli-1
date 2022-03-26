#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int i = 5000,
        n1,
        n2,
        n3,
        priz;
    MessageBoxA(0,
        "На Вашем счету 5000 грн.\n\
За каждую попытку со счета будет сниматься 300 грн.\n\
 В случае выпадения выиграшных комбинаций к вашим оставшимся деньгам будут  начислены выиграные :\n\
 000 - 100 грн,\n\
 111 - 200 грн,\n\
 222 - 300 грн,\n\
 333 - 400 грн,\n\
 444 - 500 грн,\n\
 5XX - 600 грн,\n\
 55X - 700 грн,\n\
 555 - 800 грн,\n\
 7XX - 900 грн,\n\
 77X - 1000 грн.\n\
 При выпадении комбинации 777- Вы выигрываете супер приз 30 000грн и игра заканчивается!\n\
 При выпадении комбинации 666- накладывается штраф и со счета снимается 2000 грн!\n ",
        "Правила игры!!!",
        MB_ICONEXCLAMATION);


    while (i >= 300)
    {
        srand(time(0));
        priz = 0;
        i = i - 300;
        n1 = rand() % 8;
        n2 = rand() % 8;
        n3 = rand() % 8;

        string s1 = to_string(n1);
        string s2 = to_string(n2);
        string s3 = to_string(n3);





        if (n1 == 0 && n2 == 0 && n3 == 0)
        {
            priz = 100;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 1 && n2 == 1 && n3 == 1)
        {
            priz = 200;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 2 && n2 == 2 && n3 == 2)
        {
            priz = 300;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 3 && n2 == 3 && n3 == 3)
        {
            priz = 400;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 4 && n2 == 4 && n3 == 4)
        {
            priz = 500;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 5 && n2 != 5 && n3 != 5)
        {
            priz = 600;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 5 && n2 == 5 && n3 != 5)
        {
            priz = 700;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 5 && n2 == 5 && n3 == 5)
        {
            priz = 800;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 6 && n2 == 6 && n3 == 6)
        {
            priz = -2000;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 7 && n2 != 7 && n3 != 7)
        {
            priz = 900;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 7 && n2 == 7 && n3 != 7)
        {
            priz = 1000;
            i = i + priz;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }
        else if (n1 == 7 && n2 == 7 && n3 == 7)
        {
            i = 30000;
            goto link;
        }
        else
        {
            priz = 0;
            string si = to_string(i);
            string spriz = to_string(priz);
            string result = "Ваша комбинация: " + s1 + s2 + s3 +
                "\nВаш приз составил: " + spriz + "грн" +
                "\nНа Вашем счету: " + si + "грн \nВы хотите продолжать игру?";
            int message = MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_YESNO);

            switch (message)
            {
            case IDNO:
                goto link;
                break;
            }
        }


    }
link:
    if (i < 300)
    {
        string result = "У Вас закончились средства!!! Вы проиграли";
        MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_ICONERROR);
    }
    else if (i == 30000)
    {
        string result = "Поздравляем!!! Вы выиграли 30000 грн!!! можете забрать приз!";
        MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_ICONEXCLAMATION);
    }
    else
    {
        string si = to_string(i);
        string result = "Вы завершили игру!!! Можете забрать выигрыш: " + si + "грн.";
        MessageBoxA(0, result.c_str(), "Ваш результат!!!", MB_ICONEXCLAMATION);
    }

}