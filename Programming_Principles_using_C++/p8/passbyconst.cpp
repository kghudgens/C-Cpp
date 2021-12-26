#include <iostream>
#include <vector>

void print(const std::vector<double> &v)
{
    std::cout << "{";
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i];
        if (i != v.size() - 1)
            std::cout << ",";
    }
    std::cout << "}\n";
}

void f(int x)
{
    std::vector<double> vd1(10);
    std::vector<double> vd2(100000);
    std::vector<double> vd3(x);

    print(vd1);
    print(vd3);
    print(vd2);
}

int main()
{
    f(23);
}