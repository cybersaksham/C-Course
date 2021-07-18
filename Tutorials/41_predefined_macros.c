#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The file name is %s\n", __FILE__);
    printf("Today date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line no is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    return 0;
}