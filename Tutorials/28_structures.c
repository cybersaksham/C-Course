#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    int marks;
    char fav_char;
};

int main(int argc, char const *argv[])
{
    struct Student saksham, ravi, shubham;
    strcpy(saksham.name,"Saksham");
    strcpy(ravi.name,"Ravi");
    strcpy(shubham.name,"Shubham");

    saksham.id = 1;
    ravi.id = 2;
    shubham.id = 3;

    saksham.marks = 10;
    ravi.marks = 10;
    shubham.marks = 10;

    saksham.fav_char = 'a';
    ravi.fav_char = 'b';
    shubham.fav_char = 'c';

    printf("Saksham got %d marks\n", saksham.marks);

    return 0;
}