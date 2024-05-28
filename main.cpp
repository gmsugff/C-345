#include "sort.h"
#include<iostream>
#include<string>

int main(){

    int arrI[] = { 5, 2, 8, 1, 6 };
    float arrF[] = { 3.14, 2.71, 1.618, 0.123 };
    cort c;
    
    std::cout << "Максимальный элемент в массиве int: " << c.Max(arrI) << std::endl;
    
    std::cout << "Минимальный элемент в массиве float: " << c.Min(arrF) << std::endl;

   c.bubbleS(arrI);
    std::cout << "Отсортированный массив int после сортировки: ";
    for (int num : arrI) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Индекс элемента 8 в массиве int: " << c.binSe(arrI, 8) << std::endl;

    c.repEl(arrI, 8, 10);
    std::cout << "Массив int после замены элемента: ";
    for (int num : arrI) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}