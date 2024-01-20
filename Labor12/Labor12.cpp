#include <string.h>
#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int Day = 3;
    int Month = 3;
    string ArrMonth[12] {"Января", "Февраля", "Марта", "Апреля", "Мая", "Июня", "Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"};
    int D, T;

    if (Day % 10 == 0)
    {
        switch (Day / 10)
        {
        case 1:
            cout << "десятое ";
            break;

        case 2:
            cout << "двадцатое ";
            break;

        case 3:
            cout << "тридцатое ";
            break;
        }

    }
    if (Day % 10 != 0 && Day / 10 != 1)

    {
        switch (Day / 10)
        {
        case 2:
            cout << "Двадцать ";
            break;

        case 3:
            cout << "Тридцать ";
            break;
        }
        switch (Day % 10)
        {
        case 1:
            cout << "Первое ";
            break;
        case 2:
            cout << "Второе ";
            break;
        case 3:
            cout << "Третье ";
            break;
        case 4:
            cout << "Четвертое ";
            break;
        case 5:
            cout << "Шятое ";
            break;
        case 6:
            cout << "Шестое ";
            break;
        case 7:
            cout << "Седьмое ";
            break;
        case 8:
            cout << "Восьмое ";
            break;
        case 9:
            cout << "Девятое ";
            break;
        }
    }
        if (Day / 10 == 1 && Day % 10 != 0) 
        {
            switch (Day % 10) 
            {
            case 1:
                cout << "одинадцатое ";
                break;
            case 2:
                cout << "Двенадцатое ";
                break;
            case 3:
                cout << "Тринадцатое ";
                break;
            case 4:
                cout << "Четырнадцатое ";
                break;
            case 5:
                cout << "Пятнадцатое ";
                break;
            case 6:
                cout << "Шестнадцатое ";
                break;
            case 7:
                cout << "Семьнадцатое ";
                break;
            case 8:
                cout << "Восемьнадцатое ";
                break;
            case 9:
                cout << "Девятьнадцатое ";
                break;
            }

        }
        for (int i = 0; i < 12; i++)
        {   
            if (i+1 == Month)
            {
                cout << ArrMonth[i];
            }
            
        }

    return 0;
}

