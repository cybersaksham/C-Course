#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];

    marks[0] = 34;
    printf("marks of student 0 is %d\n", marks[0]);
    marks[0] = 6;
    marks[1] = 4;
    marks[2] = 56;
    marks[3] = 15;
    printf("marks of student 0 is %d\n", marks[0]);

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array - ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }

    int points[4] = {45, 67, 54, 98};
    for (int j = 0; j < 4; j++)
    {
        printf("The value of %d element of the array is %d\n", j, points[j]);
    }

    return 0;
}
