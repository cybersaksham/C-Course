#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "saksham";
    char s2[] = "ravi";
    char s3[54];
    printf("The concatenaiton of s1 & s2 is %s\n", strcat(s1, s2)); // concatanate into s1
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    printf("The reverse of s1 is %s\n", strrev(s1));
    printf("The reverse of s2 is %s\n", strrev(s2));

    strcpy(s3, strcat(s1, s2));
    puts(s3);

    return 0;
}