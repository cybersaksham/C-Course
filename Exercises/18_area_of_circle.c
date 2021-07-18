#include <stdio.h>
#include <math.h>
#define pi 3.14

float Edistance(int x1, int x2, int y1, int y2)
{
    float Edistance;
    Edistance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return Edistance;
}

float area(int x1, int x2, int y1, int y2, float (*fptr)(int, int, int, int))
{
    return pi * (fptr(x1, x2, y1, y2) * fptr(x1, x2, y1, y2));
}

int main(int argc, char const *argv[])
{
    int x1, x2, y1, y2;
    float area_circle;

start:

    printf("\nEnter first point :-\n");
    printf("x1 = ");
    scanf("%d", &x1);
    printf("y1 = ");
    scanf("%d", &y1);

    printf("\nEnter second point :-\n");
    printf("x2 = ");
    scanf("%d", &x2);
    printf("y2 = ");
    scanf("%d", &y2);

    area_circle = area(x1, x2, y1, y2, Edistance);
    printf("\nThe area of circle whose radius is distance b/w points entered by you is %0.2f\n", area_circle);

    goto start;

    return 0;
}