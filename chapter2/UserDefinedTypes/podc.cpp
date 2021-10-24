#include <cstdio>

struct Book
{
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main()
{
    Book nueromancer;
    nueromancer.pages = 271;
    printf("Nueromancer has %d pages", nueromancer.pages);
}