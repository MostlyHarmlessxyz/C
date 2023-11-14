#include <stdio.h>

int prize[8];

int main()
{
    int n;
    scanf("%d", &n);
    int number0[7]; // 中奖号码
    int i, j, k;
    int a;
    int cnt[n + 1];
    for (i = 0; i < 7; i++) // 输入中奖号码
    {
        scanf("%d", &number0[i]);
    }
    for (i = 1; i <= n; i++)
    {
        cnt[i] = 0;             // 初始化 cnt[i] 为0
        for (k = 0; k < 7; k++) // 使用 k 作为内层循环变量
        {
            scanf("%d", &a);
            if (a == number0[0] || a == number0[1] || a == number0[2] || a == number0[3] || a == number0[4] || a == number0[5] || a == number0[6])
            {
                cnt[i]++;
            }
        }
        for (j = 1; j <= 7; j++)
        {
            if (cnt[i] == j)
            {
                prize[j]++;
                break;
            }
        }
    }
    printf("%d %d %d %d %d %d %d\n", prize[7], prize[6], prize[5], prize[4], prize[3], prize[2], prize[1]);

    return 0;
}
