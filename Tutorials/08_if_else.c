#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Your age is %d.\n", age);
    if (age >= 18)
    {
        printf("You can drive gear vehicles.");
    }
    else if (age >= 16)
    {
        printf("You can drive non-gear vehicles.");
    }
    else if (age >= 10)
    {
        printf("You cannot drive but you should start learn driving at your place.");
    }
    else
    {
        printf("You cannot drive.");
    }

    return 0;
}
