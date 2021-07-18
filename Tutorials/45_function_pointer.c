#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world\n");
}

int main(int argc, char const *argv[])
{
    int (*fptr)(int, int);
    fptr = &sum;
    int d = (*fptr)(4, 6);
    printf("The value of d is %d\n", d);

    return 0;
}