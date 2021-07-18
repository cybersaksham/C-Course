/*
You manage a travel agency & you want you n = 3 drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take  n = 3 input and your drivers will startinputing their details.
Your program should present details of drivers in beautiful manner.
Only use structures!!
*/

#include <stdio.h>
#include <string.h>

typedef struct Drivers
{
    char Name[50];
    char License[50];
    char Route[50];
    float Kms;
} dr;

int main(int argc, char const *argv[])
{
    dr d1, d2, d3;

    printf("Enter details of Driver No 1:-\n");
    printf("Name - ");
    scanf(" %s", &d1.Name);
    printf("Driving License No - ");
    scanf(" %s", &d1.License);
    printf("Route - ");
    scanf(" %s", &d1.Route);
    printf("Kms of route - ");
    scanf(" %f", &d1.Kms);

    printf("\nEnter details of Driver No 2:-\n");
    printf("Name - ");
    scanf(" %s", &d2.Name);
    printf("Driving License No - ");
    scanf(" %s", &d2.License);
    printf("Route - ");
    scanf(" %s", &d2.Route);
    printf("Kms of route - ");
    scanf(" %f", &d2.Kms);

    printf("\nEnter details of Driver No 3:-\n");
    printf("Name - ");
    scanf(" %s", &d3.Name);
    printf("Driving License No - ");
    scanf(" %s", &d3.License);
    printf("Route - ");
    scanf(" %s", &d3.Route);
    printf("Kms of route - ");
    scanf(" %f", &d3.Kms);

    printf("\n******Printing details of drivers:\n");

    printf("For Driver No 1:\n");
    printf("Name is %s\n", d1.Name);
    printf("Driving License is %s\n", d1.License);
    printf("Route is %s\n", d1.Route);
    printf("Kms is %0.1f\n", d1.Kms);

    printf("\nFor Driver No 2:\n");
    printf("Name is %s\n", d2.Name);
    printf("Driving License is %s\n", d2.License);
    printf("Route is %s\n", d2.Route);
    printf("Kms is %0.1f\n", d2.Kms);

    printf("\nFor Driver No 3:\n");
    printf("Name is %s\n", d3.Name);
    printf("Driving License is %s\n", d3.License);
    printf("Route is %s\n", d3.Route);
    printf("Kms is %0.1f\n", d3.Kms);

    return 0;
}