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
            continue;
        }
        printf("Age not greater than 10 so you should read this!!!\n");
    }

    return 0;
}
