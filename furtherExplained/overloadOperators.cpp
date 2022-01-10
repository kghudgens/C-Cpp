// operators are symbols that are used to perform an action

// *note: that if the user needs to go to see your definition of an method from the interface, youve probably failed

#include <iostream>
#include <string>

class Position
{
public:
    int y = 20;
    int x = 20;
    // the pos being passed in to the parameters gives the user access to the member functions
    Position operator+(Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }

    bool operator==(Position pos)
    {
        if (pos.x == pos.y)
        {
            return true;
        }

        if (pos.x != pos.y)
        {
            return false;
        }
    }
};

int main()
{
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " " << pos3.y << std::endl;

    if (pos1 == pos2)
    {
        std::cout << "They are the same";
    }
    else
    {
        std::cout << "Thats cap";
    }
    return 0;
}