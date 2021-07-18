// If you want to run this file then first uncomment that section
// Don't uncomment more than 1 section at same time

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;

    // r ---> read a file
    // ptr = fopen("43_more_file_functions.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The second character I read was %c\n", c);

    // ptr = fopen("43_more_file_functions.txt", "r");
    // char str[3];
    // fgets(str, 4, ptr);
    // printf("The string I read was %s\n", str);

    // w ---> write in a file after deleting whole content
    // ptr = fopen("43_more_file_functions.txt", "w");
    // fputc('o', ptr);
    // fputs("This is saksham", ptr);

    // r+ ---> read & write in a file after deleting whole content which is equal to length of string
    // ptr = fopen("43_more_file_functions.txt", "r+");
    // fputc('o', ptr);
    // fputs("This is saksham", ptr);

    // w+ ---> read & write in a file after deleting whole content
    // ptr = fopen("43_more_file_functions.txt", "w+");
    // fputc('o', ptr);
    // fputs("This is saksham", ptr);

    // a+ ---> read & append in a file without deleting whole content
    // ptr = fopen("43_more_file_functions.txt", "a+");
    // fputc('o', ptr);
    // fputs("This is saksham", ptr);

    return 0;
}