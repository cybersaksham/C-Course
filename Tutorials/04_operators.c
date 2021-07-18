#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Arithmetic Operators
    int a, b;
    a = 34;
    b = 6;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    int c;
    float d;
    c = 34;
    d = 6.34;
    printf("c + d = %f\n", c + d);
    printf("c - d = %f\n", c - d);
    printf("c * d = %f\n", c * d);
    printf("c / d = %f\n", c / d);

    // Relational Operators
    /*
    If true then return 1
    If false then return 0
    */
    int e, f;
    e = 34;
    f = 6;
    printf("e == f = %d\n", e == f);

    int g, h;
    g = 34;
    h = 34;
    printf("g == h = %d\n", g == h);

    // Logical Operators
    /*
    For non zero value is 1
    For zero value is 0
    */
    int i, j;
    i = 5;
    j = 34;
    printf("i && j = %d\n", i && j);

    int k, l;
    k = 5;
    l = 0;
    printf("k && l = %d\n", k && l);

    int m, n;
    m = 5;
    n = 0;
    printf("m || n = %d\n", m || n);

    int o, p;
    o = 0;
    p = 5;
    printf("!(o) = %d\n", !o);
    printf("!(p) = %d\n", !p);

    // Bitwise Operators
    // 0 = 00
    // 1 = 01
    // 2 = 10
    // 3 = 11
    int q, r;
    q = 2;
    r = 3;
    printf("q & r = %d\n", q & r);

    return 0;
}
