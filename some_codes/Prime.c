#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    int i;
    int cnt = 0;
    if (n % 2 != 0)
    {
        for ( i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                cnt++;
        }
    }else{
        for ( i = 2; i <= sqrt(n); i+=2)
        {
            if (n % i == 0)
                cnt++;
        }
    }
    
    return cnt;
}
int main()
{
    int i;
    scanf("%d",&i);
    for (i  = i ; i < 1000000000; i++)
    {
        if (isPrime(i) == 0)
        {
            printf("%d\n",i);
        }
    }
    
return 0;
}
