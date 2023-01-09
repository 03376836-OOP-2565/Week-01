// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int age = 0;    // public variable 

void function_1()
{
    age = 10;
}

void function_2()
{
    std::cout << "Age = " << age << "\n";
}

int main()
{
    age = 30;
    function_1();
    function_2();
}
