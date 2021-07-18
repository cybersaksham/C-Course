/*
Print multiplication table of a number entered by the user in pretty form

Example:
Input
Enter the number you want multiplication table of
6
Output
Table of 6:
6 x 1 = 6
6 x 2 = 12
.
.
.
6 x 10 = 60
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, j;
    printf("Enter the number you want multiplication table of\t");
    scanf("%d", &num);
    printf("Enter the number until you want multiplication table:\t");
    scanf("%d", &j);

    for (int i = 1; i < j + 1; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
