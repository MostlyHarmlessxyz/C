#include <stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    int i;
    int cnt=0;
    int s = 0;
    for ( i = 1; ; i++)
    {
        if (k>=i)
        {
            k-=i;
            cnt+=i;
            s += i*i;
        }else{
            cnt+=k;
            s+=k*i;
            break;
        }
    }
    printf("%d\n",s);
return 0;
}
