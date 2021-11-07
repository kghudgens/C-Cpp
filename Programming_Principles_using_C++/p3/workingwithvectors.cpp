#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{

    std::vector<double> v;

    // push back method adds value to vector
    v.push_back(2.7);
    v.push_back(3.3);
    v.push_back(4.8);

    std::cout << v.size();
}