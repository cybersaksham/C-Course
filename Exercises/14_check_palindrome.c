/*
User would have to enter a number
We have to check whether it is palindrome or not
*/

#include <stdio.h>

void palindrome(int num)
{
    int original = num;
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    if (original == reversed)
    {
        printf("%d is a palindrome\n", original);
    }
    else
    {
        printf("%d is not a palindrome\n", original);
    }
}

int main(int argc, char const *argv[])
{
    int num;

    for (int i = 0; i < 2; i = i)
    {
        printf("Enter an integer to check palindrome - ");
        scanf("%d", &num);
        palindrome(num);
    }

    return 0;
}