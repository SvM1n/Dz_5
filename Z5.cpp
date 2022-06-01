#include "Mas5.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    char ans;
    do {
        std::cout << "Введите размер массива: " << std::endl;
        std::cin >> n;
        int *arr;
        arr = ar(n);
        filling(arr, n);
        show(arr, n);
        clear(arr);
        std::cout << "Хотите продолжить работу?(y/n): " << std::endl;
        std::cin >> ans;

    } while (ans != 'n');
}