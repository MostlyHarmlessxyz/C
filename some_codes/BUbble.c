#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i;
    srand((unsigned long)time(NULL));
    printf("你这个数组有几个数字啊：");
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        num[i] = rand() % 1000000;
        printf("%d ", num[i]);
        if (i == n - 1)
        {
            printf("\n\n\n\n\n");
        }
    }
    int cnt = 0;
    do
    {
        cnt = 0; // 初始化cnt
        for (i = 0; i < n - 1; i++)
        {
            if (num[i] > num[i + 1])
            {
                int t;
                t = num[i + 1];
                num[i + 1] = num[i];
                num[i] = t;
                cnt++;
            }
        }
    } while (cnt != 0);

    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
        if (i == n - 1)
        {
            printf("\n");
        }
    }

    return 0;
}
