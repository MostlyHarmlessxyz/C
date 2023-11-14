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

void NumPrime(int n)
{
    int num[n];
    int cnt = 0;
    int i = 1;
    int j = 3;
    num[0] = 2;
    do
    {
        if (isPrime(j) == 0)
        {
            num[i] = j;
            printf("这是第%d个素数：%d\n",i+1,num[i]);
            i++;
        }
        j+=2;
    } while (i < n);
    
}

int main()
{
    printf("你他妈需要几个素数？快他妈说");
    unsigned long long int n;
    scanf("%lld",&n);
    NumPrime(n);
    return 0;
}
