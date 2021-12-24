/**
 *  Lesson on how to pass values into the parameters of a function. Showing how
 *  the value passed into the function is unaffected by the function. That it is
 *  simply a copy.
 */
#include <iostream>

int f(int x)
{
    x = x + 1;
    return x;
}

int main()
{
    int xx = 0;
    std::cout << f(xx) << std::endl;
    std::cout << xx << std::endl;

    int yy = 7;
    std::cout << f(yy) << std::endl;
    std::cout << yy << std::endl;
}