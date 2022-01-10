#include <iostream>

class Entity
{
public:
    float X, Y;

    // Constructor that on initialization sets the values
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    // Overloaded Constructor that takes in the users values and sets the
    // members to that on initialization
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

// When you want to create a class that cant be instantiated and contain for
// example static methods, set the constructor to delete
class Log
{
public:
    Log() = delete;

    static void Write()
    {
    }
};

int main()
{
    Entity e;
    e.Print();
}

// Without initializing the values for X and Y in the entity class, I am
// allowing whatever is left in memory take place for their values.
//

// method that constructs the object for you

// *note: in C++ primitive types are not set automatically, they will take a
// *random value, this isnt java