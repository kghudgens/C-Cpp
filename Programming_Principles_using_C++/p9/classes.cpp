
class X
{
public:    // Access modifier
    int m; // data member
    int mf(int v)
    {
        int old = m;
        m = v;
        return old;
    } // Function member
};