// Reverse the given array

#include <stdio.h>

void array_rev(int arg1[])
{
    int a;
    for (int i = 0; i < 4; i++)
    {
        a = arg1[i];
        arg1[i] = arg1[8 - i];
        arg1[8 - i] = a;
    }
}

void array_print(int arg2[])
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arg2[i]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    array_print(arr);
    array_rev(arr);
    printf("\nThe reverse order is :-\n");
    array_print(arr);

    return 0;
}
