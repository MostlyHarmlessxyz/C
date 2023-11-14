// 找最小值
#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int num[n];
    int min;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    min = num[0];
    for ( i = 1; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("%d\n",min);
return 0;
}
