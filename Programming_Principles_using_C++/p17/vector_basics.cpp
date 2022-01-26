#include <vector>
// Building a vector from scratch
namespace manual
{
    class vector
    {
        int sz;
        double *elem;

    public:
        vector(int s);

        int size() const { return sz; }
    };
}

int main()
{
    // The normal implementation
    std::vector<double> age(4); // vector with 4 elements of doubles
    age[0] = 0.33;
    age[1] = 22.0;
    age[2] = 27.2;
    age[3] = 54.2;

    return 0;
}