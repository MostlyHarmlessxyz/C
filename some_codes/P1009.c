#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long int S=0;
    int i,j;
    for ( i = 1; i <= n; i++)
    {
        unsigned long long int t = 1;
        for ( j = 1; j <= i; j++)
        {
            t*=j;
        }
        S+=t;
    }
    printf("%lld\n",S);
return 0;
}
