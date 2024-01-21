#include <string.h>
#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //Задание 1
    cout << "\tЗадание 1\n" << endl;
    int Day = 20; // Инициализация переменных
    int Month = 3;
    string ArrMonth[12] {"Января", "Февраля", "Марта", "Апреля", "Мая", "Июня", "Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"}; // Инициализация массива 

    if (Day % 10 == 0)    //Проверка переменной и вывод в косоль при соблюдении условий
    {
        switch (Day / 10)
        {
        case 1:
            cout << "Десятое ";
            break;

        case 2:
            cout << "Двадцатое ";
            break;

        case 3:
            cout << "Тридцатое ";
            break;
        }

    }
    if (Day % 10 != 0 && Day / 10 != 1) //Проверка переменной и вывод в косоль при соблюдении условий

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
        if (Day / 10 == 1 && Day % 10 != 0)  //Проверка переменной и вывод в косоль при соблюдении условий
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
                cout << "Семнадцатое ";
                break;
            case 8:
                cout << "Восемнадцатое ";
                break;
            case 9:
                cout << "Девятнадцатое ";
                break;
            }

        }
        for (int i = 0; i < 12; i++) // Цикл на работу с массивом, для проверки месяца
        {   
            if (i+1 == Month)
            {
                cout << ArrMonth[i] << endl;
            }
            
        }

        //Задание 2
        cout << "\n\tЗадание 2\n" << endl;
        int Sdvig = -1;
        int Val;
        string Nap ="С";
        string S[4] = { "Юг", "Запад", "Север", "Восток" };

        if (Nap == "Ю")
        {
            Val = 0;
        }
        if (Nap == "З")
        {
            Val = 1;
        }
        if (Nap == "С")
        {
            Val = 2;
        }
        if (Nap == "В")
        {
            Val = 3;
        }

        switch (Sdvig)
        {
        case  1:
            if (Val == 3)
            {
                Val = 0;
            }
            else 
            {
                Val++;
            }
            for (int i = 0; i < 4; i++)
            {
                if (i == Val) 
                {
                    cout << S[i];
                }
            }
            break;

        case -1:
            if (Val == 0)
            {
                Val = 3;
            }
            else
            {
                Val--;
            }
            for (int i = 0; i < 4; i++)
            {
                if (i == Val)
                {
                    cout << S[i];
                }
            }

            break;

        case  0:
            for (int i = 0; i < 4; i++)
            {
                if (i == Val)
                {
                    cout << S[i] << endl;
                }
            }

            break;
        }

        // Задание 3
        cout << "\n\tЗадание 3\n" << endl;

        string V1 = "учебное задание\n"; //объявление строк
        string V2 = "учебных заданий\n";
        Val = 21;

        if (Val % 10 == 0)    //Проверка переменной и вывод в косоль при соблюдении условий
        {
            switch (Val / 10)
            {
            case 1:
                cout << "Десять " << V2;
                break;

            case 2:
                cout << "Двадцать " << V2;
                break;

            case 3:
                cout << "Тридцать " << V2;
                break;

            case 4:
                cout << "Сорок " << V2;
                break;
            }

        }
        if (Val % 10 != 0 && Val / 10 != 1) //Проверка переменной и вывод в косоль при соблюдении условий

        {
            switch (Val / 10)
            {
            case 2:
                cout << "Двадцать ";
                break;

            case 3:
                cout << "Тридцать ";
                break;

            case 4:
                cout << "Сорок ";
                break;
            }

            switch (Val % 10)
            {
            case 1:
                cout << "одно " << V1;
                break;
            case 2:
                cout << "два " << V1;
                break;
            case 3:
                cout << "три " << V1;
                break;
            case 4:
                cout << "четыре " << V2;
                break;
            case 5:
                cout << "пять " << V2;
                break;
            case 6:
                cout << "Шесть " << V2;
                break;
            case 7:
                cout << "Семь " << V2;
                break;
            case 8:
                cout << "Восемь " << V2;
                break;
            case 9:
                cout << "Девять " << V2;
                break;
            }
        }

        if (Val / 10 == 1 && Val % 10 != 0)  //Проверка переменной и вывод в косоль при соблюдении условий
        {
            switch (Val % 10)
            {
            case 1:
                cout << "Одинадцать " << V2;
                break;
            case 2:
                cout << "Двенадцать " << V2;
                break;
            case 3:
                cout << "Тринадцать " << V2;
                break;
            case 4:
                cout << "Четырнадцать " << V2;
                break;
            case 5:
                cout << "Пятнадцать " << V2;
                break;
            case 6:
                cout << "Шестнадцать " << V2;
                break;
            case 7:
                cout << "Семьнадцать " << V2;
                break;
            case 8:
                cout << "Восемьнадцать " << V2;
                break;
            case 9:
                cout << "Девятьнадцать " << V2;
                break;
            }

        }

        //Задание 4
        cout << "\n\tЗадание 4\n" << endl;
           
        int Namb = 815; // Объявление и инициализация значения

        switch (Namb / 100) //Проверка переменной и вывод в косоль при соблюдении условий
        {
        case 1:
            cout << "Cто ";
            break;
        case 2:
            cout << "Двести ";
            break;
        case 3:
            cout << "Триста ";
            break;
        case 4:
            cout << "Четыреста ";
            break;
        case 5:
            cout << "Пятьсот ";
            break;
        case 6:
            cout << "Шестьсот ";
            break;
        case 7:
            cout << "Семьсот ";
            break;
        case 8:
            cout << "Восемьсот  ";
            break;
        case 9:
            cout << "Девятьсот  ";
            break;
        }

        if ((Namb % 100) / 10 == 1)//Проверка переменной и вывод в косоль при соблюдении условий
            switch (Namb % 100) 
            {
            case 10:
                cout << "десять";
                break;
            case 11:
                cout << "одинадцать";
                break;
            case 12:
                cout << "двенадцать";
                break;
            case 13:
                cout << "тринадцать";
                break;
            case 14:
                cout << "четырнадцать";
                break;
            case 15:
                cout << "пятнадцать";
                break;
            case 16:
                cout << "шестнадцать";
                break;
            case 17:
                cout << "семнадцать";
                break;
            case 18:
                cout << "восемнадцать";
                break;
            case 19:
                cout << "девятнадцать";
                break;
            }
        else {
            switch ((Namb % 100) / 10) //Проверка переменной и вывод в косоль при соблюдении условий
            {
            case 2:
                cout << "двадцать ";
                break;
            case 3:
                cout << "тридцать ";
                break;
            case 4:
                cout << "сорок ";
                break;
            case 5:
                cout << "пятьдесят ";
                break;
            case 6:
                cout << "шестьдесят ";
                break;
            case 7:
                cout << "семьдесят ";
                break;
            case 8:
                cout << "восемьдесят ";
                break;
            case 9:
                cout << "девяносто ";
                break;
            }

            switch (Namb % 10) //Проверка переменной и вывод в косоль при соблюдении условий
            {
            case 1:
                cout << "один";
                break;
            case 2:
                cout << "два";
                break;
            case 3:
                cout << "три";
                break;
            case 4:
                cout << "четыре";
                break;
            case 5:
                cout << "пять";
                break;
            case 6:
                cout << "шесть";
                break;
            case 7:
                cout << "семь";
                break;
            case 8:
                cout << "восемь";
                break;
            case 9:
                cout << "девять";
                break;
            }
        }
        
        //Задание 5
        cout << "\n\tЗадание 5\n" << endl;

        int year = 2024; //объявление и инициализация искомого года
        int base = 1984; //Объявление года старта цикла
        int Asia = year - base; // Переменная для поиска цикла
        switch (Asia % 5)//Проверка переменной и вывод в косоль при соблюдении условий
        {
        case 0:
            cout << "Год зеленого ";
            break;
        case 1:
            cout << "Год красного ";
            break;
        case 2:
            cout << "Год желтого ";
            break;
        case 3:
            cout << "Год белого ";
            break;
        case 4:
            cout << "Год черного ";
            break;
        }
        
        switch (Asia % 12)//Проверка переменной и вывод в косоль при соблюдении условий
        {
        case 0:
            cout << "крысы";
            break;
        case 1:
            cout << "коровы";
            break;
        case 2:
            cout << "тигра";
            break;
        case 3:
            cout << "зайца";
            break;
        case 4:
            cout << "дракона";
            break;
        case 5:
            cout << "змеи";
            break;
        case 6:
            cout << "лошади";
            break;
        case 7:
            cout << "овцы";
            break;
        case 8:
            cout << "обезьяны";
            break;
        case 9:
            cout << "курицы";
            break;
        case 10:
            cout << "собаки";
            break;
        case 11:
            cout << "свиньи";
            break;
        }
    return 0;
}

