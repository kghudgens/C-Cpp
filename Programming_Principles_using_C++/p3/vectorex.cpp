#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::vector<double> temps; //temperatures
    double temp;

    while (std::cin >> temp)
        temps.push_back(temp);

    double sum = 0;

    for (int i = 0; i < temps.size(); ++i)
        sum += temps[i];
    std::cout << "Average temperature: " << sum / temps.size() << std::endl;

    sort(temps.begin(), temps.end());

    std::cout << "Median Temperature: " << temps[temps.size() / 2] << std::endl;
}