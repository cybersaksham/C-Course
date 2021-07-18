#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 10)
        {
            printf("Age with greater than 10 cannot play this game!!!");
            break;
        }
        printf("Play the game\n");
    }

    return 0;
}
