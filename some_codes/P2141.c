#include <stdio.h>
// 其中有多少个数，恰好等于集合中另外两个（不同的）数之和？
int num[100 + 10];
int haha1[10010];

int main()
{
    int n;
    int i, j;
    int cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int sum = num[i] + num[j];
            if (sum <= 10000)
            {
                haha1[sum]++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (haha1[num[i]] > 0)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}

/*
这道题，先构建一个haha数组，因为你sum最大不能超过10000，所以haha[sum]表示一个状态，非0就是有。
然后再遍历一遍haha[num[i]],若非0，说明“有人来过“，cnt++就可以了
*/