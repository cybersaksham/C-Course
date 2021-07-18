/*
Create Rock, Paper, Scissor
Player 1 (Take Name as input) : Rock
Player 2 (Computer) : Scissors --> Player 1 gets 1 point
Play this game 3 times & display name of winner
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum()
{
    srand(time(NULL));
    return rand() % 3;
}

void choice(int p)
{
    if (p == 1)
    {
        printf("Rock");
    }
    else if (p == 2)
    {
        printf("Paper");
    }
    else if (p == 3)
    {
        printf("Scissor");
    }
}

int score(int p1, int p2)
{
    if (p1 == p2)
    {
        return 0;
    }

    if ((p1 == 1) && (p2 == 2))
    {
        return 1;
    }
    if ((p1 == 2) && (p2 == 1))
    {
        return -1;
    }

    if ((p1 == 3) && (p2 == 1))
    {
        return 1;
    }
    if ((p1 == 1) && (p2 == 3))
    {
        return -1;
    }

    if ((p1 == 2) && (p2 == 3))
    {
        return 1;
    }
    if ((p1 == 3) && (p2 == 2))
    {
        return -1;
    }
}

void win(int p1_Score, int p2_Score)
{
    if (p1_Score > p2_Score)
    {
        printf("Congrats!! You won.\n");
    }
    else if (p1_Score < p2_Score)
    {
        printf("Alas!! You lost.\n");
    }
    else
    {
        printf("OK!! Game tied.\n");
    }
}

int main(int argc, char const *argv[])
{
    int p1, p2;
    int p1_Score, p2_Score;

    printf("\nLets Play Game!!!\n\n");

    for (int i = 0; i < 3; i = i)
    {
        p1_Score = 0;
        p2_Score = 0;

        printf("Your turn:\n");
        printf("Enter 1 for Rock, 2 for Paper, 3 for Scissor\n");
        scanf("%d", &p1);
        printf("\n");

        printf("-----Computer's turn-----\n");
        p2 = randomNum() + 1;

        printf("\nTurn %d:\n", i + 1);

        printf("You: ");
        choice(p1);
        printf("\n");

        printf("Computer: ");
        choice(p2);
        printf("\n");

        if (score(p1, p2) == 1)
        {
            p2_Score = 1;
        }
        else if (score(p1, p2) == -1)
        {
            p1_Score = 1;
        }
        else
        {
            p1_Score = 0;
            p2_Score = 0;
        }

        printf("\n");
        win(p1_Score, p2_Score);
        printf("\n");
    }

    return 0;
}