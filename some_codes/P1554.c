#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    int i;
    int num[10] = {0};
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        int j = i;
        while (j != 0)
        {
            int digit = j % 10; // 获取最后一位数字
            num[digit]++;     // 增加相应数字的出现次数
            j /= 10;            // 去掉最后一位数字
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
