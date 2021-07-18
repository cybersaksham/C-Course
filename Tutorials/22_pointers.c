#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 76;
    int *ptra = &a;
    int *ptr2 ;
    int *ptr3 = NULL;
    printf("The value of a is %d\n", a);
    printf("The value of address of a by pointer by x is %x\n", ptra);
    printf("The value of address of a by pointer by p is %p\n", ptra);
    printf("The value of address of a by itself by x is %x\n", &a);
    printf("The value of address of a by itself by p is %p\n", &a);
    printf("The value of a by pointer is %d\n", *ptra);
    printf("The value of address of ptr2 is %p\n", ptr2);
    printf("The value of address of ptr3 is %x\n", ptr3);
    printf("The value of address of ptr3 is %p\n", ptr3);
    return 0;
}
