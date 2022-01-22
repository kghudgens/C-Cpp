#include <string>
#include <iostream>
#include <fstream>

struct Reading
{
    int temp_;
    std::string location_;
    Reading() {}
    Reading(int t, std::string l) : temp_(t), location_(l) {}
};

int main()
{

    // user temp
    int temp;
    temp = 0;
    // user location
    std::string location;

    Reading reading[10];

    // output file stream instance
    std::ofstream ost;

    // create the file raw temps
    ost.open("raw_temps.txt");

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Whats the location?\n";
        std::cin >> location;

        std::cout << "Whats the temperature there?\n";
        std::cin >> temp;

        reading[i].temp_ = temp;
        reading[i].location_ = location;

        ost << reading[i].temp_ << " " << reading[i].location_ << "\n";
    }

    ost.close();

    return 0;
}