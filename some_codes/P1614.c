#include <stdio.h>

int num[3000 + 10];
int sum0[30000 + 10];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i <= n - m; i++)
    {
        int sum = 0;
        int j = 0;
        while (j != m)
        {
            sum += num[i + j];
            j++;
        }
        sum0[sum]++;
    }

    for (i = 0; i <= 300000 + 10; i++)
    {
        if (m == 0)
        {
            printf("0\n");
            break;
        }
        else
        {
            if (sum0[i] != 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
