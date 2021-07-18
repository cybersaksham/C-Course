// Make program which calculate division, quotient, remainder of a division process

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b;
    float c;
    int d;
    float e;
    float f;
start:
    printf("You have to divide a by b\n");
    printf("Enter integer a = ");
    scanf(" %f", &a);
    printf("Enter integer b = ");
    scanf(" %f", &b);

    if (b == 0)
    {
        printf("\nb cannot be zero!!!\n\n");
    }
    else
    {
        printf("\nDividing a by b\n");
        c = a / b;
        d = floor(c);
        e = c - d;
        f = b * e;
        printf("The answer is %0.2f\n", c);
        printf("The quotient is %d\n", d);
        printf("The remainder is %0.0f\n\n", f);
    }
    goto start;

    return 0;
}
