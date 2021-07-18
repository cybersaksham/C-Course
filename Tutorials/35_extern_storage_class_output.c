#include <stdio.h>
#include "34_extern_storage_class_input.c"

extern int sum;
int sum2 = 3000;

void sum_func()
{
    extern int sum2;
    printf("%d\n", sum2);
}

int main(int argc, char const *argv[])
{
    printf("%d\n", sum);
    sum_func();

    return 0;
}