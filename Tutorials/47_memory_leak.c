#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome Saksham Kuamr Bindal\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // If we not do this then memory will rapidly increase & at a time program crash
    }

    return 0;
}