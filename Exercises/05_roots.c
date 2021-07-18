// Find roots of quadratic equation
// cofficients should be entered by user

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, x1, x2, D, ip, rp;
start:
    printf("The equation is ax^2 +bx + c\n");

    printf("Enter a = ");
    scanf("%f", &a);

    printf("Enter b = ");
    scanf("%f", &b);

    printf("Enter c = ");
    scanf("%f", &c);

    rp = ((-1 * b) / (2 * a));
    D = ((b * b) - ((4 * a) * c));

    if (D > 0)
    {
        ip = ((sqrt(D)) / (2 * a));
        x1 = rp + ip;
        x2 = rp - ip;
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are REAL & DISTINCT\n", a, b, c);
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n\n", x2);
    }
    else if (D == 0)
    {
        ip = ((sqrt(D)) / (2 * a));
        x1 = rp + ip;
        x2 = rp - ip;
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are REAL & EQUAL\n", a, b, c);
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n\n", x2);
    }
    else
    {
        ip = ((sqrt(-1 * D)) / (2 * a));
        x1 = rp + (ip);
        x2 = rp - (ip);
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are IMAGINARY\n", a, b, c);
        printf("x1 = %0.2f + (%0.2f)i\n", rp, ip);
        printf("x2 = %0.2f - (%0.2f)i\n\n", rp, ip);
    }
    goto start;

    return 0;
}
