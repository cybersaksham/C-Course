#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr = NULL;

    // If we import value i.e. *ptr then program gets crash

    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("The ponter is null so can't be derefenced\n");
    }

    return 0;
}