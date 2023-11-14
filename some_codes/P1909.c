#include <stdio.h>

int main()
{
    int n;
    int num[3];
    int price[3];
    int sum[3];
    int best = 100000000;  // best初始值 设置的大一点
    int i;
    scanf("%d",&n); // 输入所需数量
    for ( i = 0; i < 3; i++)
    {
        scanf("%d %d",&num[i],&price[i]); //输入不同类型的数量及价格
        if (n % num[i] == 0)
        {
            sum[i] = (n / num[i])  * price[i];
        }else{
            sum[i] = ((n / num[i]) + 1) * price[i];
        }
        if (sum[i]<best)
        {
            best = sum[i];
        }
    }
    printf("%d\n",best);
    
return 0;
}
