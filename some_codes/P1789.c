#include <stdio.h>

int minecraft[120][120];
int main()
{
    int n, m, k;
    int torchX, torchY;
    int fluoriteX, fluoriteY;
    int i, p;
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &torchX, &torchY); // +3 -2
        for (i = torchX + 1; i <= torchX + 5; i++)
        {
            minecraft[i][torchY + 3]++;
        }
        for (i = torchY + 1; i <= torchY + 5; i++)
        {
            minecraft[torchX + 3][i]++;
        }
        minecraft[torchX + 2][torchY + 2]++;
        minecraft[torchX + 2][torchY + 4]++;
        minecraft[torchX + 4][torchY + 2]++;
        minecraft[torchX + 4][torchY + 4]++;
    }
    if (k != 0)
    {
        for (i = 0; i < k; i++)
        {
            scanf("%d %d", &fluoriteX, &fluoriteY); // +3 -2
            for (i = fluoriteX + 1; i <= fluoriteX + 5; i++)
            {
                for (p = fluoriteY + 1; p <= fluoriteY + 5; p++)
                {
                    minecraft[i][p]++;
                }
            }
        }
    }

    int cnt = 0;
    for (i = 4; i <= n + 3; i++)
    {
        for (int j = 4; j <= n + 3; j++)
        {
            if (minecraft[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if (n == 1)
    {
        cnt = 0;
    }

    printf("%d\n", cnt);
    return 0;
}
// 4 n = 2 4 + n - 1