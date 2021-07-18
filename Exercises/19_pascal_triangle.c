/*
You have to print Pascal's Triangle.
Take no of rows in triangle as input.
*/

#include <stdio.h>

// Function for calculating factorial
int factorial(int num_fac)
{
    int res = 1;
    for (int i = 0; i < num_fac; i++)
    {
        res *= (i + 1);
    }
    return res;
}

// Function for calculating nCr
int combination(int num_comb, int base)
{
    int base_fac = factorial(base);
    int check = 1;
    for (int i = num_comb; i > num_comb - base; i--)
    {
        check *= i;
    }
    int res = check / base_fac;
    return res;
}

int main()
{
    int n;

    printf("Enter no of lines = ");
    scanf("%d", &n);

    printf("Printing Pascal's Triangle....\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("%d ", combination(i, k));
        }
        printf("\n");
    }

    return 0;
}