// Program to calculate binary of a number

#include <stdio.h>

// Function for positive numbers
void positive(int n)
{
    int quo = n / 2;
    int rem_arr[n];
    rem_arr[0] = n % 2;

    // Loop for storing remainders
    int i = 1;
    while (quo != 0)
    {
        rem_arr[i] = quo % 2;
        quo = quo / 2;
        i += 1;
    }

    // Printing in reverse order
    printf("%d in binary is ", n);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", rem_arr[j]);
    }
}

// Function for negative numbers
void negative(int n)
{
    int quo = n / 2;
    int rem_arr[n];
    rem_arr[0] = n % 2;

    // Loop for storing remainders
    int i = 1;
    while (quo != 0)
    {
        rem_arr[i] = quo % 2;
        quo = quo / 2;
        i += 1;
    }

    // Adding extra zeroes according to bits
    int len = 0;
    int left = 0;
    if (i <= 8)
    {
        len = 8;
        left = 8 - i;
        for (int j = 0; j < left; j++)
        {
            rem_arr[i + j] = 0;
        }
    }
    else if (i <= 16)
    {
        len = 16;
        left = 16 - i;
        for (int j = 0; j < left; j++)
        {
            rem_arr[i + j] = 0;
        }
    }
    else if (i <= 32)
    {
        len = 32;
        left = 32 - i;
        for (int j = 0; j < left; j++)
        {
            rem_arr[i + j] = 0;
        }
    }
    else if (i <= 64)
    {
        len = 64;
        left = 64 - i;
        for (int j = 0; j < left; j++)
        {
            rem_arr[i + j] = 0;
        }
    }

    // Making 1st complement
    for (int k = 0; k < len; k++)
    {
        if (rem_arr[k] == 0)
        {
            rem_arr[k] = 1;
        }
        else
        {
            rem_arr[k] = 0;
        }
    }

    // Making 2nd complement
    for (int k = 0; k < len; k++)
    {
        if (rem_arr[k] == 1)
        {
            rem_arr[k] = 0;
        }
        else
        {
            rem_arr[k] = 1;
            break;
        }
    }

    // Printing in reverse order
    printf("%d in binary is ", -1 * n);
    for (int j = len - 1; j >= 0; j--)
    {
        printf("%d", rem_arr[j]);
    }
}

// Main Function
int main()
{
    int n;

    printf("Enter decimal number = ", n);
    scanf("%d", &n);

    if (n >= 0)
    {
        positive(n);
    }
    else
    {
        negative(-1 * n);
    }

    return 0;
}