#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 9; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 300;
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 9; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }
    printf("\n");

    *(ptr + 2) = 400;

    for (int i = 0; i < 9; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    printf("\n");

    return 0;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_2D[2][2] = {{10, 20}, {30, 40}};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n\n", arr[0]);

    func2(arr);
    func3(arr_2D);

    return 0;
}