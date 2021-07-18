#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter a - ");
    scanf("%d", &a);
    printf("Enter b - ");
    scanf("%d", &b);

    printf("a = %d & b = %d", a, b);

    swap(&a, &b);
    printf("\nswapped\na = %d & b = %d", a, b);
    
    return 0;
}