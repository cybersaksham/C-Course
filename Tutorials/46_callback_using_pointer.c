#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHello(int (*fptr)(int, int))
{
    printf("Hello\n");
    printf("The sum of 5 & 7 is %d\n", fptr(5, 7));
}

void greetGM(int (*fptr)(int, int))
{
    printf("Good Morning\n");
    printf("The sum of 5 & 7 is %d\n", fptr(5, 7));
}

int main(int argc, char const *argv[])
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHello(ptr);
    greetGM(ptr);

    return 0;
}