#include <iostream>
#include <fstream>

class TextFile
{
public:
    void output()
    {
        std::ofstream myfile("example1.txt");
        if (myfile.is_open())
        {
            myfile << "This is a line\n";
            myfile << "This is another line";
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }

    void input()
    {
        std::string line;
        std::ifstream myfile("example1.txt");
        if (myfile.is_open())
        {
            // getline is a method that extracts characters from the stream and
            // stores that into the line variable until a delimiter is found in the
            //  stream, in this case it is \n
            while (getline(myfile, line))
            {
                std::cout << line << "\n";
            }
            // getline stops automatically at the end of the file
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }
};

int main()
{
    TextFile x;

    x.output();
    x.input();
}