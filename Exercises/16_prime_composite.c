#include <stdio.h>

int remainder_left = -1;

void check(int n)
{
    for (int i = 2; i < n; i++)
    {
        remainder_left = n % i;
        if (remainder_left == 0)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 0;
start:
    printf("Enter the number you want to check for - ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please Enter Valid Number!!\n");
    }
    else if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else if (n == 2)
    {
        printf("2 is prime\n");
    }
    else
    {
        check(n);

        if (remainder_left == 0)
        {
            printf("%d is composite\n", n);
        }
        else
        {
            printf("%d is prime\n", n);
        }
    }

    goto start;

    return 0;
}