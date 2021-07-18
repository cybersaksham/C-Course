#include <stdio.h>

int main()
{
    int row, count = 1;

    printf("Enter the no of rows = ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", count);
            count += 1;
        }
        printf("\n");
    }

    return 0;
}