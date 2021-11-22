#include <iostream>
#include <string>

// read a line
//calculate
//write result

int main()
{
    std::cout << "Please enter expression (we can handle +, *, -): \n";

    int lval = 0;
    int rval;
    char op;

    int result;
    std::cin >> lval >> op >> rval;

    switch (op)
    {
    case '+':
        result = lval + rval;
        break;
    case '-':
        result = lval - rval;
        break;
    case '*':
        result = lval * rval;
        break;
    }
    std::cout << "Result: " << result << '\n';

    return 0;
}