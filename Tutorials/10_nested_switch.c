#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;

        default:
            printf("Your marks are not 45 but are %d\n", marks);
            break;
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not among 3,13,23 but it is %d\n", age);
        break;
    }

    return 0;
}