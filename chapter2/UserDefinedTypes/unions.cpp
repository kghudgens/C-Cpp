#include <cstdio>

union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

int main()
{
    Variant v;
    v.integer = 42;
    printf("The ultimate answer is %d\n", v.integer);
    v.floating_point = 2.71498334;
    printf("Eulers number is %f\n", v.floating_point);
    printf("A dumpster fire:    %d\n", v.integer);
}