#include <cstdio>

int absolute_value(int x)
{
    if (x >= 0)
        return x;
    else
        return x * -1;
}

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

    printf("The sum of %d and %d is %d", 5, 6, sum(5, 6));
}