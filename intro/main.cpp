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

    int num1 = 42;
    int result1 = step_function(num1);

    
    int num2 = 42;
    int result2 = step_function(num2);


    int num3 = 42;
    int result2 = step_function(num3);

    printf("Num1 : %d, Step: %d\n", num1, result1);
    printf("Num2 : %d, Step: %d\n", num2, result3);
    printf("Num3 : %d, Step: %d\n", num3, result3);
    // // printf cant be called without include the c studio
    // printf("Hello world!");

    // // declaring and initializing variables
    // int the_answer;
    // the_answer = 9;
    // // if statement doesnt need nested bracket
    // // if statement
    // if (the_answer > 10)
    //     printf("Its smaller");
    // else if (the_answer == 9)
    //     printf("Ya know");
    // else
    //     printf("Not one of the two above for sure");
}