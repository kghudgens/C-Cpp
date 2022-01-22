#include <string>
#include <fstream>
#include <vector>

static int mean(std::vector<int> &vect)
{
    int mean;
    mean = 0;

    int length;
    length = vect.size();

    int sum;
    sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = vect[i] + sum;
    }

    mean = sum / length;

    return mean;
}

static int median(std::vector<int> vect)
{
    //! still got to create vector with correct ordering
    int median;
    median = 0;

    int length;
    length = vect.size();

    if (length % 2)
    {
        int middle;
        int next_up;

        middle = vect.size() / 2;

        int vector_middle;
        vector_middle = vect[middle];

        int vector_middle_next;
        vector_middle_next = vect[middle + 1];

        median = (vector_middle + vector_middle_next) / 2;
    }

    return median;
}

int main()
{
    std::string num;
    std::vector<std::string> temps_string;
    std::vector<int> temps;

    std::ifstream ist;

    ist.open("raw_temps.txt");

    if (ist.is_open())
    {
        while (std::getline(ist, num))
        {
            std::string temp_var;
            temp_var = num.substr(0, 2);

            int converted_num;

            converted_num = std::stoi(temp_var);
            temps.push_back(converted_num);
        }
        ist.close();
    }

    int mean_result = mean(temps);
    int median_result = median(temps);

    return 0;
}