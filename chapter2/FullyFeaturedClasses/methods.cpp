#include <cstdio>

struct ClockOfTheLongNow
{
    // access modifier makes the year method privat
private:
    int year;

    void add_year()
    {
        year++;
    };

    // Getter and setter methods

    bool set_year(int new_year)
    {
        // When setting the new year if the user enters anything less than 2019, it break
        if (new_year < 2019)
            return false;

        year = new_year;
        return true;
    }

    int get_year()
    {
        return year;
    }
};

int main()
{
    ClockOfTheLongNow clock;

    if (!clock.set_year(2018))
    {
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year: %d", clock.get_year());
}
