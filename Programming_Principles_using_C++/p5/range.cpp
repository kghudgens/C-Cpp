#include <iostream>
#include <vector>
class out_of_range_error
{
};

int main()
{
    try
    {
        std::vector<int> v;
        int x;
        while (std::cin >> x)
            v.push_back(x);
        for (int i = 0; i <= v.size(); ++i)
            std::cout << "v[" << i << "]==" << v[i] << std::endl;
    }
    catch (out_of_range_error)
    {
        std::cerr << "Range error\n";
        return 1;
    }
}