// Print star pattern til n rows
// n should be entered by user

#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void revStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void forback(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void backfor(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int rows, input;
start:
    printf("How many rows do you want? - ");
    scanf("%d", &rows);
    printf("For forward type 1\n");
    printf("For backward type 2\n");
    printf("For forward-backward type 3\n");
    printf("For backward-forward type 4\n");
    scanf("%d", &input);

    if (input == 1)
    {
        starPattern(rows);
    }
    else if (input == 2)
    {
        revStarPattern(rows);
    }
    else if (input == 3)
    {
        forback(rows);
    }
    else if (input == 4)
    {
        backfor(rows);
    }
    else
    {
        printf("Print valid syntax!!\n");
    }
    printf("\n");

    goto start;

    return 0;
}