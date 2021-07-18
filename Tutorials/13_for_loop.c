#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("First List\n");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    printf("Second List\n");
    int a, b;
    for (a = 0, b = 0; a < 5; a++)
    {
        printf("%d %d\n", a, b);
    }

    printf("Third List\n");
    int c, d;
    for (c = 0, d = 0; d < 3, c < 5; c++)
    {
        printf("%d %d\n", c, d);
        d++;
    }

    printf("Fourth List\n");
    int e, f;
    for (e = 0, f = 0; f = 3, e < 5; e++)
    {
        printf("%d %d\n", e, f);
        f++;
    }

    printf("Fifth List\n");
    int g, h;
    for (g = 0, h = 0; g < 5; g++, h++)
    {
        printf("%d %d\n", g, h);
    }

    return 0;
}
