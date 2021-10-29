#include <cstdio>

// class keyword makes all members private by default
class ClockOfTheLongNow
{
    int year;

public:
    void add_year()
    {
        //Function increments the year
        year++;
    }

    bool set_year(int new_year)
    { //Validates the year
        if (new_year < 2019)
            return false;

        year = new_year;
        return true;
    }

    int get_year()
    { // gives access to the year variable
        return year;
    }
};

int main()
{
}