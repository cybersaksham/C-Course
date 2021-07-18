#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    printf("%d\n", ptra - 2);
    ptra++;
    printf("%d\n", ptra);
    ptra--;
    printf("%d\n", ptra);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("\n");

    printf("The vlaue at position 0 of array is - %d\n", *(arr));
    printf("The vlaue at position 0 of array is - %d\n", *(&arr[0]));
    printf("The vlaue at position 1 of array is - %d\n", *(&arr[1]));
    printf("The vlaue at position 1 of array is - %d\n", *(arr + 1));

    printf("\n");

    printf("The address of position 0 of array is - %d\n", arr);
    printf("The address of position 0 of array is - %d\n", &arr[0]);
    printf("The address of position 1 of array is - %d\n", &arr[1]);
    printf("The address of position 1 of array is - %d\n", arr + 1);

    // arr++;  arr--; These give error

    return 0;
}