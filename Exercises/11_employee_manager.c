/*
ABC Pvt Ltd. manages employee records of other companies.
Employee Id camn be any length & it can contain any character.
for 3 employees, you have to take length of employee id as an input.
Then you have to take employee id as an input & display it on screen.
Store the id in character array which is allocated dynamically
You have to create only one character array dynamically
*/

/*
Employee 1;
Enter no of characters in you E-ID - 45
dynamically allocate the character array.
Take input from user

Employee 2;
Enter no of characters in you E-ID - 50
dynamically allocate the character array.
Take input from user

Employee 1;
Enter no of characters in you E-ID - 38
dynamically allocate the character array.
Take input from user
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *ptr_emp;
    int n, i = 0;

    while (i < 3)
    {
        printf("Employee %d:\nEnter the length of your Employee Id - ", i + 1);
        scanf("%d", &n);
        ptr_emp = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter Employee Id - ");
        scanf("%s", ptr_emp);
        printf("Employee Id is %s\n", ptr_emp);
        printf("\n");

        free(ptr_emp);
        i = i + 1;
    }

    return 0;
}