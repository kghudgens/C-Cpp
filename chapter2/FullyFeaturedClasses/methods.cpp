#include <cstdio>

struct ClockOfTheLongNow
{
    int year;
    void add_year()
    {
        year++;
    };
};

int main()
{
    ClockOfTheLongNow clock;
    clock.year = 2021;
    printf("The year is %d\n", clock.year);

    clock.add_year();
    printf("The year is %d\n", clock.year);
    clock.add_year();
    printf("The year is %d\n", clock.year);
}
