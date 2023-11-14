#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int num[110];

int isPrime(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    int cnt = 0;
    while (i < n)
    {
        int temp;
        scanf("%d",&temp);
        i++;
        if(isPrime(temp) == 0 && temp != 1) // 做傻逼1的特判，fuck you, one.
        {
            num[cnt] = temp;
            cnt++;
        }
    }
    for (int j = 0; j < cnt; j++)
    {
        printf("%d ", num[j]);
    }
    return 0;
}
// Writen by Mostly_Hamrless

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