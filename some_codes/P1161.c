#include <stdio.h>

int light[2000000]; // 偶数为off，奇数为on

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i = 1; i <= n; i++) // n次操作
    {
        int t;
        double a;
        int j;
        scanf("%lf %d",&a,&t);
        for ( j = 1; j <=t ; j++)
        {
            int b = (int)(a*(j*1.0));
            light[b]++;
        }
    }
    int k = 1;
    while (light[k] % 2 == 0)
    {
        k++;
    }
    printf("%d\n",k);
    
return 0;
}
