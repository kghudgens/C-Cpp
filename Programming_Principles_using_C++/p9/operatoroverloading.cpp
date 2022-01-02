#include <vector>
#include <iostream>
#include <string>

enum Month
{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};

Month operator++(Month &m) // prefix increment operator
{
    // if m is dec, it now equals jan if not increment
    m = (m == dec) ? jan : Month(m + 1);
    return m;
}

std::vector<std::string> month_tbl;

std::ostream &operator<<(std::ostream &os, Month m)
{
    return os << month_tbl[m];
}
