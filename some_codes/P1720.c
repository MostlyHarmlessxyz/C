#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n == 0) //特殊值判断
    {
        printf("0.00\n"); // 注意两位小数
    }else{
        if (n == 1 || n == 2)
        {
            printf("1.00\n"); // 注意两位小数
        }else{ 
            // n >=2
            long long int f[n];
            f[0]=1;
            f[1]=1;
            for (int i = 2; i < n; i++)
            {
                f[i] = f[i-1] + f[i-2];
            }
            printf("%.2f\n",(double)f[n-1]);
        } 
    }
return 0;
}
