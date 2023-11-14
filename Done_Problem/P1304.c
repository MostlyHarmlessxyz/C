#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX_PRIME 10000 // 数组开大一些

int prime[MAX_PRIME];

void Goldbach(int num);
int isPrime(int n);

int main()
{
    prime[2] = 1;
    prime[3] = 1;
    prime[5] = 1;
    prime[7] = 1;
    for (int i = 11; i < MAX_PRIME; i += 2)
    {
        if (isPrime(i) == 0)
        {
            prime[i] = 1;
        }
    }

    int n;
    scanf("%d", &n);
    for (int i = 4; i < n + 1; i += 2)
    {
        Goldbach(i);
    }
    return 0;
}
// Writen by Mostly_Hamrless

void Goldbach(int num)
{
    int cnt = 0;
    if (num == 4)
    {
        printf("4=2+2\n");
        return;
    }
    else
    {
        for (int i = 3; i < num + 1; i+=2)
        {
            for (int j = 3; j < num + 1; j+=2)
            {
                if (i + j == num && prime[i] + prime[j] == 2)
                {
                    printf("%d=%d+%d\n", num, i, j);
                    return;
                }
            }
        }
    }
}

int isPrime(int n)
{
    int i;
    int cnt = 0;
    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            cnt++;
    }
    return cnt;
}