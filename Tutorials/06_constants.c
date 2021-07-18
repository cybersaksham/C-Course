#include <stdio.h>
#define PI 3.14

int main(int argc, char const *argv[])
{
    const int a = 15;
    // a = 2;  Cannot do this since a is a constant

    // PI = 7.33;  Cannot do this since PI is a pre-defined constant
    printf("%f\n", PI);
    return 0;
}
