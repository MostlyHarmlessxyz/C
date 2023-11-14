#include <stdio.h>

int matirx[39 + 1][39 + 1]; // 输出用

int x[1600+10], y[1600+10]; // 存储位置 N^2

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    x[1] = 1;
    y[1] = (n + 1)/2;
    matirx[x[1]][y[1]] = 1;
    

    for (i = 2; i <= n * n; i++) // n*n - 1 次
    {
        if (x[i - 1] == 1 && y[i - 1] != n)
        {
            x[i] = n;
            y[i] = y[i - 1] + 1;
            matirx[x[i]][y[i]] = i;
        }
        if (x[i - 1] != 1 && y[i - 1] == n)
        {
            x[i] = x[i - 1] - 1;
            y[i] = 1;
            matirx[x[i]][y[i]] = i;
        }
        if (x[i - 1] == 1 && y[i - 1] == n)
        {
            x[i] = 2;
            y[i] = n;
            matirx[x[i]][y[i]] = i;
        }
        if (x[i - 1] != 1 && y[i - 1] != n)
        {
            if (matirx[x[i - 1] - 1][y[i - 1] + 1] == 0)
            {
                x[i] = x[i - 1] - 1;
                y[i] = y[i - 1] + 1;
                matirx[x[i]][y[i]] = i;
            }
            else
            {
                x[i] = x[i - 1] + 1;
                y[i] = y[i - 1];
                matirx[x[i]][y[i]] = i;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", matirx[i][j]);
            if (j == n)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
