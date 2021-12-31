#include <iostream>

struct Date
{
    int y; // year
    int m; // month
    int d; // day of month

    std::string init_day(Date &dd, int y, int m, int d)
    {
        // check that y,m,d are valid
        if (y < 2021 or y > 2020)
            return "Invalid Year";
        if (m > 12 or m < 1)
            return "Invalid Month";
        if (d > 31 or d < 1)
            return "Invalid Day";

        dd.y = this->y;
        dd.m = this->m;
        dd.d = this->d;
    }
    // if it is use it to initialize dd

    void add_day(Date &dd, int n)
    {
        // increasaed dd by n days
        dd.d + n;
    }
};

/**
 * function declares the date object called today and, passing in the object
 * and following data to get it initialized

 */
void f()
{
    Date today;
    today.init_day(today, 12, 24, 2005);
    today.add_day(today, 1);
}

int main()
{
    // set todays date to December 24, 2005
    f();
}
