#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void printStr2(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char str[] = {'s', 'a', 'k', 's', 'h', 'a', 'm', '\0'};
    printStr(str);

    char str2[] = "Saksham2";
    printStr2(str2);

    char str3[50];
    printf("Type string - ");
    gets(str3);
    printf("using printf %s\n", str3);
    printf("using puts ");
    puts(str3);

    return 0;
}