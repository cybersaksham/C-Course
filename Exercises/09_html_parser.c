/*
Input:
<h1>    This is a string    </h1>
Output:
This is a string
*/

#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // Removing trailing spaces from start
    while (str[0] == ' ')
    {
        // Shift string to left
        for (int j = 0; j < strlen(str); j++)
        {
            str[j] = str[j + 1];
        }
    }

    // Removing trailing spaces from end
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main(int argc, char const *argv[])
{
    char str[50];
    printf("Enter a HTML tag to make parser of that:-\n");
    gets(str);
    printf("\n");
    parser(str);
    printf("The parsed string is:-\n");
    printf("~~%s~~", str);

    return 0;
}