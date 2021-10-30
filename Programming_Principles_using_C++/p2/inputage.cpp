#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name;
    int age;
    //Collect first name
    std::cin >> first_name;
    //Collect age
    std::cin >> age;
    // Build string with variable values
    std::cout << "Hello, " << first_name << "(age " << age << ")\n";

    std::cout << "Please enter your first and last names\n";
    std::string first;
    std::string last;
    std::cin >> first >> last; // read two strings
    std::cout << "Hello" << first << " " << last << "\n";
}