class X
{
public:
    // public members
    //   - the interface to users (accessible by all)
    // functions
    // types
    // data (should be private but can be public)
private:
    // private members
    //   - the implementation details (used by the members of this class only)
    // function
    // types
    //  data
};

// Classes are by default private unless access modifier is set to public
class Y
{
    int m;
    int mf(int);

public:
    int f(int i)
    {
        m = i;
        return mf(i);
    }
};

int main()
{
    Y x;
    int y = x.f(2);
}