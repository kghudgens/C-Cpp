#include <iostream>
#include <string>

// read a line
//calculate
//write result

void error(std::string message)
{
    std::cout << message;
}

int main()
{
    std::cout << "Please enter expression (we can handle +, *, -): \n";

    int lval = 0;
    int rval;
    char op;

    int result;
    std::cin >> lval;

    if (!std::cin)
        error("no first operand");

    while (std::cin >> op)
    {
        std::cin >> rval;
        if (!std::cin >> op)
            error("no second operand");

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
        case '/':
            result = lval / rval;
            break;
        default:
            std::cout << "Result: " << lval << "\n";
            return 0;
        }
    }

    error("bad expression");

    return 0;
}