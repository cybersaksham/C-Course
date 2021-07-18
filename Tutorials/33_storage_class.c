// Declaration --> Telling compiler about the variable (No space reserved)
// Definition --> Declaration + space reservation

#include <stdio.h>

int sum = 400;
int sum_func(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int register_func()
{
    static int var;
    var++;
    printf("The var is %d\n", var);
    return var;
}

int main(int argc, char const *argv[])
{
    sum = sum_func(3, 5);
    printf("The sum is %d\n", sum);

    register int myvar = register_func();
    myvar = register_func();
    myvar = register_func();
    myvar = register_func();

    return 0;
}