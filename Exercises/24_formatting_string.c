/*
WAP to format a string restrict upto alphabats & spaces only.
*/

#include <stdio.h>

int main()
{
    char str[20], arr[20];
    int count = 0, asc, j = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating length of string
    while (str[count] != '\0')
    {
        count += 1;
    }

    // Loop for checking alphabats
    for (int i = 0; i < count; i++)
    {
        asc = (int)str[i];
        // If ascii value falls into range of alphabats or space then store in array
        if ((asc < 91 && asc > 64) || (asc > 96 && asc < 123) || asc == 32)
        {
            arr[j] = str[i];
            j += 1;
        }
        else
        {
            // Else if characters other than alphabats contains space on both sides then remove one space
            if ((int)str[i - 1] == 32 && (int)str[i + 1] == 32)
            {
                j -= 1;
            }
        }
    }

    // Printing final array as string
    for (int k = 0; k < j; k++)
    {
        printf("%c", arr[k]);
    }

    return 0;
}