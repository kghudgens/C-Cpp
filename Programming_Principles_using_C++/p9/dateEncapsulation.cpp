#include <iostream>
#include <string>

class Date
{
    int y, m, d;

public:
    Date(int y, int m, int d);
    void add_day(int n);
    int month() { return m; };
    int day();
    int year();
};

Date::Date(int yy, int mm, int dd)
    : y(yy), m(mm), d(dd)
{
}

void Date::add_day(int n)
{
    d = d + n;
}

void f(Date d1, Date d2)
{
    std::cout << d1.month() << " " << d2.month() << "\n";
}

int main()
{
    Date d1(2022, 01, 02);
    Date d2(2022, 02, 01);
    f(d1, d2);
}