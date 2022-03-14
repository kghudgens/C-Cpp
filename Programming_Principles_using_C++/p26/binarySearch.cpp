#include <iostream>
#include <vector>

int binarySearch(std::vector<int> &list, int target)
{
    sort(list.begin(), list.end());

    int middle;
    middle = list.size() / 2;

    while (true)
    {
        if (list[middle] == target)
        {
            return list[middle];
        }
        else if (list[middle] > target)
        {
            middle = middle - 1;
        }
        else
        {
            middle = middle + 1;
        }

        if (middle == 0 || middle == list.size() - 1)
        {
            break;
        }
    }
    return -1;
}

int main()
{
    int target;
    target = 11;

    std::vector<int> test;
    test.push_back(17);
    test.push_back(5);
    test.push_back(6);
    test.push_back(10);
    test.push_back(7);
    test.push_back(1);

    std::cout << binarySearch(test, target);
}