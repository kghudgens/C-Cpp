#include <cstdio>

char english[] = "A book holds a house of gold.";
// String literals are supported by Unicode
// the following would have given the same string literal above in chinese
// char16_t chinese[] = u "path";

int main()
{
    char house[] = "a house of gold";
    printf("A book holds a %s\n", house);
}