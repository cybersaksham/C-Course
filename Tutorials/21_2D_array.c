#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[2][4] = {{45, 25, 12, 32},
                       {2, 1, 6, 85}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("marks[%d,%d] is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
