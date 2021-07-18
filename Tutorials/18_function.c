#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void printstar(int d)
{
    for (int e = 0; e < d; e++)
    {
        printf("%c", '*');
    }
    printf("\n");
}

int takenum()
{
    int f;
    printf("Enter a number\t");
    scanf("%d", &f);
    return f;
}

void age()
{
    int h;
    printf("Enter your age\t");
    scanf("%d", &h);
    printf("Your age is %d\n", h);
}

int main(int argc, char const *argv[])
{
    int a, b, c, g;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    printstar(7);
    g = takenum();
    printf("The number entered is %d\n", g);
    age();

    return 0;
}
