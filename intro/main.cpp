// Pulls in external libraries
#include <cstdio>

// Functions are written the same way as Java, only without access modifier, and static keyword
int step_function(int x)
{
    int result = 0;
    if (x < 0)
    {
        result = -1;
    }
    else if (x > 0)
    {
        result = 1;
    }
    return result;
}
// in c++ the entry point is the main function, like java
int main()
{
    // printf cant be called without include the c studio
    printf("Hello world!");

    // declaring and initializing variables
    int the_answer;
    the_answer = 9;
    // if statement doesnt need nested bracket
    // if statement
    if (the_answer > 10)
        printf("Its smaller");
    else if (the_answer == 9)
        printf("Ya know");
    else
        printf("Not one of the two above for sure");
}