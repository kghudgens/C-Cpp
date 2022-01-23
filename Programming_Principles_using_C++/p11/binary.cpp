#include <vector>
#include <iostream>
#include <fstream>

static void error(std::string message, std::string filename)
{
    std::cout << message << " " << filename;
}

int main()
{
    std::cout << "Please enter input file name\n";
    std::string name;
    std::cin >> name;
    // tell stream to use binary mode
    std::ifstream stream(name.c_str(), std::ios_base::binary);

    if (!stream)
        error("cant open file", name);

    // open an ostream for binary output file
    std::cout << "Please enter output file name";
    std::cin >> name;
    std::ofstream oStream(name.c_str(), std::ios_base::binary);

    if (!oStream)
        error("cant open file", name);

    std::vector<int> v;

    // read from binary file
    int i;
    while (stream.read(as_bytes(i), sizeof(int)))
        v.push_back(i);

    for (int i = O; i < v.size(); ++i)
        oStream.write(as_bytes(v[i]), sizeof(int));
    return 0;
}