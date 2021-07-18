#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Use of Malloc
    int *ptr1;
    int n;
    printf("Enter the size of array you want to create - ");
    scanf("%d", &n);
    ptr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array - ", i);
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array is %d\n", i, ptr1[i]);
    }

    printf("\n");

    // Use of Calloc
    int *ptr2;
    int n2;
    printf("Enter the size of array you want to create - ");
    scanf("%d", &n2);
    ptr2 = (int *)calloc(n2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value no %d of this array - ", i);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value no %d of this array is %d\n", i, ptr2[i]);
    }

    printf("\n");

    // Use of Realloc
    printf("Enter the size of new array you want to create - ");
    scanf("%d", &n2);
    ptr2 = (int *)realloc(ptr2, n2 * sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value no %d of this array - ", i);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value no %d of this array is %d\n", i, ptr2[i]);
    }

    free(ptr2);

    return 0;
}