#include <stdio.h>

int num[80 + 10];

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int i, j, k;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            for (k = 1; k <= c; k++)
            {
                int sum = i + j + k;
                num[sum]++;
            }
        }
    }
    int max = num[3];
    int cnt = 3;
    for (i = 4; i < a + b + c + 1; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            cnt = i;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
