#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 345;
    float b = 8.3;
    void *ptr;

    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));

    ptr = &b;
    printf("The value of b is %0.1f\n", *((float *)ptr));

    return 0;
}