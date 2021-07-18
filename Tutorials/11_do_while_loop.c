#include <stdio.h>

int main()
{
    int num, index;
    index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("The list is\n");

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}
