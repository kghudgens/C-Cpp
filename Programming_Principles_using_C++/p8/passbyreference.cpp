#include <iostream>
#include <vector>

// The difference between passing the reference and passing the reference as a
// const is that the reference isnt changed in the latter. The keyword const
// denotes if the reference will be changed

/**
 * Fill the vector
 *
 * @param v
 */
void init(std::vector<double> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {

        v[i] = i;
        std::cout << v[i];
    }
}

void g(int x)
{
    std::vector<double> vd1(10);
    std::vector<double> vd2(100);
    std::vector<double> vd3(x);

    init(vd1);
    init(vd2);
    init(vd3);
}

int main()
{
    g(3);
}