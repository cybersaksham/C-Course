#include <stdio.h>
#include <stdlib.h>

int dangling()
{
    int a, b, sum;
    a = 34;
    b = 67;
    sum = a + b;

    return sum;
}

int main(int argc, char const *argv[])
{

    // Case 1: De-Allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 64;
    ptr[1] = 27;
    ptr[2] = 50;
    ptr[3] = 34;

    free(ptr); // ptr is now a danlging pointer

    // Case 2: Function returning local variable address
    int *ptr2 = dangling(); // ptr2 is now a danlging pointer

    // Case 3: Variable goes out of scope
    int *ptr3;
    {
        int a = 13;
        ptr3 = &a;
    }
    // ptr3 is now a danlging pointer

    return 0;
}