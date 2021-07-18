/*
Give gifts to students who pass
Maths, Physics - 20 rs
Maths - 10 rs
Physics - 10 rs
None - 5 rs
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pass;
    printf("Enter the subjects you pass\n");
    printf("For Math alone enter 1\n");
    printf("For Physics alone enter 2\n");
    printf("For Math & Physics both enter 3\n");
    printf("For none enter 4\n");
    scanf("%d", &pass);
    if (pass == 1)
    {
        printf("You passed in Maths so you are gifted Rs-10.");
    }
    else if (pass == 2)
    {
        printf("You passed in Physics so you are gifted Rs-10.");
    }
    else if (pass == 3)
    {
        printf("You passed in both subjects so yoou are gifted Rs-20.");
    }
    else if (pass == 4)
    {
        printf("You passed in no one subject but still you are gifted Rs-5.");
    }
    else
    {
        printf("You have entered invalid syntax.");
    }

    return 0;
}
