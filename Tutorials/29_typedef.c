#include <stdio.h>

typedef struct Student
{
    char name[50];
    int id;
    int marks;
    char fav_char;
} std;

int main(int argc, char const *argv[])
{
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    ul l1, l2, l3;
    l1 = 100;
    printf("ul is %d\n", l1);

    std s1, s2;
    s1.id = 1;
    s2.id = 2;
    printf("s1 id is %d\n", s1.id);
    printf("s2 id is %d\n", s2.id);

    // int *a, b;
    typedef int *intptr;
    intptr a, b;
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}