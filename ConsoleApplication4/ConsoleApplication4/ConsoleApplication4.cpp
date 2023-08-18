// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"
#include "Reference.h"
int main()
{
    //int x = 8;
    //int y = 10;
    //int sum = 0;
    //int a = 4;
    //int fact = 1;
    //int* px = &x;
    //int* py = &y;
    //int* resultval = &sum;
    //int* resultfact = &fact;
    //int* pa = &a;
    ////int res = add(px, py);
    ////addval(px, py, resultval);
    ////swap(px, py);
    //Factorial(pa, resultfact);
    //std::cout << *resultfact;

    //Test Reference.cpp
    int x = 4;
    int y = 10;
    int s;
    //Add(x, y, s);
    //Factorial(x, s);
    Swap(x, y);
    std::cout << x << " " << y;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
