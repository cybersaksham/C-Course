#include <stdio.h>

int global_var = 20;

void local_func(int local_var)
{
    printf("The address of local_var in local_func is %d\n", &local_var);
    printf("The value of local_var in local_func is - %d", local_var);
}

void global_func1()
{
    int global_var = 21;
    printf("The address of global_var in global_func1(in which local variable also created) is %d\n", &global_var);
    printf("The value of global_var in global_func1(in which local variable also created) is - %d", global_var);
}

void global_func2()
{
    printf("The address of global_var in global_func2(in which local variable is not created) is %d\n", &global_var);
    printf("The value of global_var in global_func2(in which local variable is not created) is - %d", global_var);
}

int static_func(int b1)
{
    // If we do not initialize then automatically take zero
    static int static_var = 0;
    printf("The value of static_var is - %d\n", static_var);
    static_var++;
    return b1 + static_var;
}

int main(int argc, char const *argv[])
{
    int local_var = 34;
    printf("The address of local_var in main is %d\n", &local_var);
    local_func(local_var);
    printf("\n\n");

    printf("The address of global_var in main is %d\n", &global_var);
    global_func1();
    printf("\n\n");

    printf("The address of global_var in main is %d\n", &global_var);
    global_func2();
    printf("\n\n");

    int b = 10;
    int val = static_func(b);
    val = static_func(b);
    val = static_func(b);
    val = static_func(b);
    val = static_func(b);
    // int *ptr = &val;
    // printf("The value of local_func is %d\n", val);

    return 0;
}