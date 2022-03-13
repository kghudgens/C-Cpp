#include <iostream>

// declare the template
template <typename T>

// Create function that generically states x and y are of type T
T myMax(T x, T y)
{
    // return true if x i larger
    return (x > y) ? x : y;
}

int main()
{
    // When calling the method pass in the preferred data type
    std::cout << myMax<int>(3, 7) << std::endl;
    std::cout << myMax<double>(3.0, 7.0) << std::endl;
    std::cout << myMax<int>('g', 'e') << std::endl;

    return 0;
}