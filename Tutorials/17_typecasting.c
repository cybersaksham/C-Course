#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 3;
    float b = 54.35484;
    float c = 54 / 7;
    float d = (float)54 / 7;
    float e = 54.35484;
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %f\n", c);
    printf("The value of d is %f\n", d);
    printf("The value of e is %d\n", (int)e);
    return 0;
}
