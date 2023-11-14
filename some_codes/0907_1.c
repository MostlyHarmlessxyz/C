/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a = rand();
    int b = a % 100 + 1;

    printf("%d %d\n",a,b);

    return 0;
}


#include <stdio.h>

int main()
{
    int a = 0,n = 0,count = 0;
    double m;
    printf("请开始输入数字，输入完毕后请输入-1:\n");
    do
    {
       scanf("%d",&a);
       n = n + a;
       count++;
    } while (a != -1);
    m = (n + 1) * 1.0 / (count - 1);
    printf("算术平均值为%lf\n",m);
    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a = 0;
    scanf("%d",&n);
    do
    {
        a = n % 10;
        n /= 10;
        printf("%d",a);
    } while (n != 0);
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int n = 4;
    int m = 2;
    int x = 0;
    int count = 0;
    //while(count < 1000)
    //{
        while (m < n)
        {
            if (n % m != 0)
            {
                x++;
                break;
            }else
            {
                m++;
            }
        }
    //}
    if(x == 1)
    {
        printf("你找到了个一个素数%d\n",n);
    }else
    {
        printf("sb\n");
    }
return 0;
}
// 