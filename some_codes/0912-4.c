// 区间素数数目及和

/* 废案，会爆内存，int不够长
#include <stdio.h>

int main()
{
    int m=15,n=20;
    //scanf("%d %d",&m,&n);
    int a = m; //初始值
    int t = 1; // a-1的阶乘
    int k;
    int i = 1;
    while (a<=n) // 遍历到n
    {
        while (i <= a-1) //求(a-1)！= t
        {
            t = t * i;
            i++;
        }
        k = t % a;
        if(k == a-1)
        {
            printf("%d\n",a);
        }
        a++;
    }
    return 0;
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a = m;
    int t=2;
    int cnt = 0;
    int num = 0; // 质数数目
    int sum = 0; // 质数和
    while (a<=n)
    {
        int b = sqrt(a);
        while(t<=b) // 遍历到根号a
        {
            if (a % t == 0)
            {
                cnt = 1;
            }
            t++;
        }
        if (cnt == 0)
        {
            // printf("%d\n",a);
            num++;
            sum = sum + a;
        }
        cnt = 0; //cnt 初始化
        t = 2; //t 初始化
        a++;
    }
    printf("%d %d\n",num,sum);
    return 0;
}
