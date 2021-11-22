#include <iostream>
#include <string>

// read a line
//calculate
//write result

int main()
{
    std::cout << "Please enter expression (we can handle + and -): \n";

    int lval = 0;
    int rval;
    char op;

    int result;
    std::cin >> lval >> op >> rval;

    if (op == '+')
        result = lval + rval;
    else if (op == '-')
        result = lval - rval;

    std::cout << "Result: " << result << '\n';
}