#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr; // ptr is a wild pointer here
    // *ptr = 34;  This is not a good thimg to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("Value in ptr is %d\n", *ptr);

    return 0;
}