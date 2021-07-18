#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main(int argc, char const *argv[])
{
    int f_num;
start:
    printf("Enter the number you want the factorial of - ");
    scanf("%d", &f_num);
    printf("The factorial of %d is %d! = %d\n", f_num, f_num, factorial(f_num));
    goto start;
    return 0;
}
