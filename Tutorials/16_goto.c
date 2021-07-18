#include <stdio.h>

int main(int argc, char const *argv[])
{
    // label:
    //     printf("We are inside label\n");
    //     printf("Hello World\n");
    //     goto label;
    // The above will give infinite loop so comment out

    printf("Hello World\n");
    printf("Hello World\n");
    goto end;
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
end:
    printf("We are skipped to end!!\n");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("Slide - %d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter 0 to new slide,1 for start again, 2 for end this game and any other to more instructions.\n");
            scanf("%d", &num);
            if (num == 0)
            {
                break;
            }

            if (num == 1)
            {
                continue;
            }
            if (num == 2)
            {
                goto end_game;
            }

            printf("These are the more instructions\n");
        }
    }

end_game:
    return 0;
}
