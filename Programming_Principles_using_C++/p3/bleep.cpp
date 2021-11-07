#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

int main()
{
    std::cout << "Enter your veggies \n";
    std::string disliked = "Spinach";

    std::vector<std::string> vegetables;
    std::string vegetable;

    while (std::cin >> vegetable)
        if (vegetable == disliked)
            vegetables.push_back("Bleep");
        else
            vegetables.push_back(vegetable);

    for (int i = 0; i < vegetables.size(); ++i)
        std::cout << "Vegetable list: " << vegetables[i] << "\n";
}