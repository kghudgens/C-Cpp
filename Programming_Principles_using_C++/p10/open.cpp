#include <iostream>
#include <fstream>
#include <string>

static void error(std::string s, std::string file)
{
    std::cout << s << " filename: " << file;
}

int main()
{

    std::cout << "Please enter input file name: ";
    std::string filename;

    std::cin >> filename;

    std::ifstream ist(filename.c_str()); // ist is the name of the instance for ifstream
    // defining an ifstream with the name of the string, opens the file for reading
    // c_str() is member of string class and makes a c style string

    if (!ist)
        error("cant open input file", filename);
    return 0;
}
