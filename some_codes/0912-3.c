// 水仙花数。
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int n=3;
   // scanf("%d",&n);
    int m;
    int b;
    int i,j,k;
    i=1;
    while (i<=9)
    {
        j=0;
        while (j<=9)
        {
            k=0;
            while (k<=9)
            {
                m = pow(i,n)+pow(j,n)+pow(k,n);
                b = i *100 + j*10 + k;
                if (m == b)
                {
                    printf("%d\n",b);
                }
                k++;
            }
            j++;
        }
        i++;
    }
return 0;
}

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    m = pow(10,n-1);
    int t = 0;
    int p,q;
    while (m < pow(10,n))
    {
        p = m;
        while (p != 0) // 得到m各位的n次方和
        {
            q = p % 10;
            p = (p - q) / 10;
            t = t + pow(q,n);
        }
        if (t == m)
        {
            printf("%d\n",m);
        }else{
            t = 0; //清空t
        }
        m++; //遍历10^n ~ 10^(n+1)
    }
    return 0;
}