#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    double yen_rate = 113.98;
    double pound_rate = 100.19;
    double euro_rate = 98.3;
    // Create menu
    std::cout << "What currency are you using?\n1.Yen\n2.Euros\n3.Pounds\n";
    // Create the variable the contains their choice
    int currency_choice;
    // Take in the currency
    std::cin >> currency_choice;
    std::cout << "How much money would you like to convert?";

    int currency_amount;
    std::cin >> currency_amount;

    if (currency_choice == 1)
        std::cout << currency_amount * yen_rate;
    else if (currency_choice == 2)
        std::cout << currency_amount * euro_rate;
    else if (currency_choice == 3)
        std::cout << currency_amount * pound_rate;
    else
        std::cout << "You didnt enter a number from the menu";
}