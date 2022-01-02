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
enum Day
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main()
{
    Month m = feb;
    // m =7;  // Cant assign an int to an month object
    int n = m;
    Month mm = Month(7); // convert int to Month (unchecked)
}