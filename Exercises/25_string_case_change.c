/*
WAP to convert whole string to uppercase or lowercase as per the choice of user
*/

#include <stdio.h>

int main()
{
    char str[20];
    int count = 0, asc, query;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Taking input for user's choice
    printf("Enter 1 for lowercase & 2 for uppercase = ");
    scanf("%d", &query);

    // Calculating length of string
    while (str[count] != '\0')
    {
        count += 1;
    }

    // Loop for checking elements
    for (int i = 0; i < count; i++)
    {
        asc = (int)str[i];
        // If choice is for lowercase & character falls in uppercase then increase ascii value by 32
        if ((asc < 91 && asc > 64) && query == 1)
        {
            str[i] = (char)(asc + 32);
        }
        // If choice is for uppercase & character falls in lowercase then decrease ascii value by 32
        else if ((asc > 96 && asc < 123) && query == 2)
        {
            str[i] = (char)(asc - 32);
        }
    }

    // Printing final string
    puts(str);

    return 0;
}