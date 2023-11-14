// 5是怎么出来的呢？

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    long long int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld",&num[i]);
    }
    
    int cnt = 1;
    int max = 1;
    for (i = 1; i < n; i++)
    {
        if (num[i] == 1 + num[i-1])
        {
            cnt++;
        }else{
            if(max < cnt)
            {
                max = cnt;
            }

            cnt = 1;
        }
    }
    printf("%d\n",max);
return 0;
}
