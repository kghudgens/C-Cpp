#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    // Intialize both a and b
    int a = 0;
    int b = 0;
    std::cout << "Please enter two integers\n";
    // Take in their input
    std::cin >> a >> b;

    // If else syntax
    if (a < b)
        std::cout << "Max(" << a << ", " << b << "\n";
    else
        std::cout << "Cap";
}