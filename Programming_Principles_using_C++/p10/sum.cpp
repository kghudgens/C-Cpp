#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream myfile;
    std::string num;

    int sum;
    sum = 0;

    myfile.open("nums.txt");
    if (myfile.is_open())
    {
        while (std::getline(myfile, num))
        {
            int nums = std::stoi(num);

            sum = sum + nums;
        }
    }
    else
        std::cout << "Unable to open";

    std::cout << sum;

    return 0;
}