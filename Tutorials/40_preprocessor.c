#include <stdio.h>
#define pi 3.14
#define square(x) x *x

int main(int argc, char const *argv[])
{
    int rad = 4;
    printf("The area of circle is %f\n", pi * square(rad));
    return 0;
}
