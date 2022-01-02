#include <iostream>
#include <string>

class Date
{
    int y, m, d;
    bool check(); // return true if date is valid

public:
    class Invalid
    {
    }; // to be used as an exception
    Date(int y, int m, int d);
    void add_day(int n);
    int month() { return m; };
    int day() { return d; };
    int year() { return y; };
};

Date::Date(int yy, int mm, int dd)
    : y(yy), m(mm), d(dd)
{
    if (!check())
        throw Invalid();
}

void Date::add_day(int n)
{
    d = d + n;
}

void f(Date d1, Date d2)
{
    std::cout << d1.month() << " " << d2.month() << "\n";
}

bool Date::check()
{
    if (m < 1 || 12 < m)
        return false;
    if (d < 1 || 31 < d)
        return false;
    if (y < 2022 || 2022 < y)
        return false;
    return true;
}

int main()
{
    Date d1(2022, 01, 02);
    Date d2(2022, 02, 01);
    f(d1, d2);
}