#include "sort.h"
#include<iostream>
#include<string>

int main(){

    int arrI[] = { 5, 2, 8, 1, 6 };
    float arrF[] = { 3.14, 2.71, 1.618, 0.123 };
    cort <int>c(arrI);
    cort <float>f(arrF);
    std::cout << "Ìàêñèìàëüíûé ýëåìåíò â ìàññèâå int: " << c.Max(arrI) << std::endl;
    
    std::cout << "Ìèíèìàëüíûé ýëåìåíò â ìàññèâå float: " << f.Min(arrF) << std::endl;

   c.bubbleS(arrI);
    std::cout << "Îòñîðòèðîâàííûé ìàññèâ int ïîñëå ñîðòèðîâêè: ";
    for (int num : arrI) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Èíäåêñ ýëåìåíòà 8 â ìàññèâå int: " << c.binSe(arrI, 8) << std::endl;

    c.repEl(arrI, 8, 10);
    std::cout << "Ìàññèâ int ïîñëå çàìåíû ýëåìåíòà: ";
    for (int num : arrI) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
