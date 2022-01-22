#include <vector>
#include <iostream>
#include <fstream>

// to save time
using namespace std;
int main()
{
    // create object that creates bytes and sends them to file
    ofstream myfile;

    myfile.open("example.txt");
    myfile << "Writing this to a file.";
    myfile.close();
    return 0;
}