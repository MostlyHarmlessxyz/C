#include <stdio.h>
#include <math.h>
int MinPrime(int n) // 轮子 求出较小的那个质因数
{
    int i;
    int cnt = 0;
    int prime;
    if (n % 2 != 0)
    {
        for ( i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0){
                cnt++;
                prime = i;
            }
        }
    }else{
        for ( i = 2; i <= sqrt(n); i+=2)
        {
            if (n % i == 0){
                cnt++;
                prime = i;
            }     
        }
    }
    
    return prime;

}

int main()
{
    int n;
    int maxprime,minprime;
    scanf("%d\n",&n);
    minprime = MinPrime(n);
    maxprime = n / minprime;
    printf("%d\n",maxprime);
return 0;
}
