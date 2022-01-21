#include <iostream>
#include <fstream>
#include <string>

class IOStreams
{
public:
    void error(std::string s, std::string file)
    {
        std::cout << s << " filename: " << file;
    }
};

int main()
{
    IOStreams x;

    std::cout << "Please enter input file name: ";
    std::string filename;

    std::cin >> filename;

    std::ifstream ist(filename.c_str()); // ist is the name of the instance for ifstream
    if (!ist)
        x.error("cant open input file", filename);
    return 0;
}
