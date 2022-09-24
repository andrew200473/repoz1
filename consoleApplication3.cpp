// вторая лаба с первого урока.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double PI = 3.14;
    std::cout << "введите Х: ";
    int x;
    std::cin >> x;
    int f;
        if (0 <= x <= 1)
            f = 2 ^ 2 - x;
        if (x > 1 || x < 0)
            f = (pow(x,2) - sin(x) * PI * pow(x,2));
        std::cout << f << std::endl;
        return 0;
}

