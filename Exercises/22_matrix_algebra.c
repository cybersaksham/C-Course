#include <stdio.h>

void add(int m, int n, int p, int q)
{
    int a[m][n], b[p][q];

    if (m > 0 && n > 0 && p > 0 && q > 0)
    {
        if (m == p && n == q)
        {
            printf("Addition is possible\n");

            printf("Enter 1st matrix\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("Enter 2nd matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            int axb[m][n];

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    axb[i][j] = (a[i][j] + b[i][j]);
                }
            }

            printf("Addition of matices : \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("%d ", axb[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Addition not possible\n");
        }
    }
    else
    {
        printf("Addition not possible\n");
    }
}

void subtract(int m, int n, int p, int q)
{
    int a[m][n], b[p][q];

    if (m > 0 && n > 0 && p > 0 && q > 0)
    {
        if (m == p && n == q)
        {
            printf("Subtarction is possible\n");

            printf("Enter 1st matrix\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("Enter 2nd matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            int axb[m][n];

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    axb[i][j] = (a[i][j] - b[i][j]);
                }
            }

            printf("Subtraction of matices : \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("%d ", axb[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Subtraction not possible\n");
        }
    }
    else
    {
        printf("Subtraction not possible\n");
    }
}

void multiply(int m, int n, int p, int q)
{
    int sum = 0;
    int a[m][n], b[p][q];

    if (m > 0 && n > 0 && p > 0 && q > 0)
    {
        if (n == p)
        {
            printf("matrix multiplication is possible\n");
            int axb[m][q];

            printf("Enter 1st matrix\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("Enter 2nd matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        sum += a[i][k] * b[k][j];
                    }
                    axb[i][j] = sum;
                    sum = 0;
                }
            }

            printf("mutiplication of matices : \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("%d ", axb[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Column of A should be equal to Row of B\n");
        }
    }
    else
    {
        printf("Cannot enter zero or negative values.\n");
    }
}

int main()
{
    int m, n, p, q, process;

    printf("Enter size of 1st matrix: \n");
    scanf("%d%d", &m, &n);
    printf("Enter size of 2nd matrix: \n");
    scanf("%d%d", &p, &q);

    printf("Enter 1 to add\n");
    printf("Enter 2 to subtract\n");
    printf("Enter 3 to multiply\n");
    scanf("%d", &process);

    if (process == 1)
    {
        add(m, n, p, q);
    }
    else if (process == 2)
    {
        subtract(m, n, p, q);
    }
    else if (process == 3)
    {
        multiply(m, n, p, q);
    }

    return 0;
}
