#include <stdio.h>

int main()
{
    int m, n, p, q, sum = 0;

    printf("Enter size of 1st matrix: \n");
    scanf("%d%d", &m, &n);
    printf("Enter size of 2nd matrix: \n");
    scanf("%d%d", &p, &q);

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
    

    return 0;
}