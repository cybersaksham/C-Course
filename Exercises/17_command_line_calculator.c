/*
You have to create a command line utility to add/subtract/divide/multiply two numbers
First command line argument must be an operation.
The next arguments being the two numbers
For example :-
>> Command.c add 45 4
>> 49
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;

    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "division") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
