#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.335;

    printf("The value of a is %d and the value of b is %f\n", a, b);

    printf("Value of b upto 4 decimals is %0.4f\n", b);
    printf("Value of b upto 2 decimals is %0.2f\n", b);
    printf("Value of b in 2 offsets left space ahead is %2.2f given\n", b);
    printf("Value of b in 20 offsets left space ahead is %20.2f given\n", b);
    printf("Value of b in 2 offsets left space behind is %-2.2f given\n", b);
    printf("Value of b in 20 offsets left space behind is %-20.2f given\n", b);

    return 0;
}
