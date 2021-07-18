// Calculate Fibonacci both by recursion & iteration
// Find which takes longer recursion or iteration

#include <stdio.h>

int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib_rec(n - 1) + fib_rec(n - 2));
    }
}

int fib_itr(int n)
{
    int a, b;
    a = 0;
    b = 1;
    for (int i = 0; i < n; i++)
    {
        b = b + a;
        a = b - a;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int f_num;
start:
    printf("Enter the number you want the fibonacci of - ");
    scanf("%d", &f_num);
    printf("fib_itr(%d) = %d\n", f_num, fib_itr(f_num));
    printf("fib_rec(%d) = %d\n", f_num, fib_rec(f_num));

    goto start;

    return 0;
}


// RESULTS
// Recursion takes much time than iteration
// Because in iteration every fibonacci is calculated one time only i.e. fib(40) takes 40 calls
// While in recursion it makes tree of calls i.e. fib(40) takes 2^40 calls