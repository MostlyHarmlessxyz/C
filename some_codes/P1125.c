#include <stdio.h>
#include <string.h>
#include <math.h>
int isPrime(int n);

int main()
{
    char code[110];
    fgets(code, 101, stdin);
    int length = strlen(code); // duwihq \0
    // printf("%d",length);
    int cnt[27] = {0};
    int maxn = 1;
    int minn = 999;
    int i;
    for (i = 0; i <= length; i++)
    {
        cnt[code[i] - 96]++;
    }
    for (i = 1; i <= 26; i++)
    {
        if (cnt[i] != 0)
        {

            if (cnt[i] > maxn)
            {
                maxn = cnt[i];
            }
            else if (cnt[i] < minn)
            {
                minn = cnt[i];
            }
        }
    }
    int minus = maxn - minn;
    //printf("%d %d\n", maxn, minn);
    if (isPrime(minus) == 1 || minus == 0 || minus == 1)
    {
        printf("No Answer\n0");
    }
    else
    {
        printf("Lucky Word\n%d", minus);
    }

    return 0;
}

int isPrime(int n)
{
    int i;
    int cnt = 0;
    if (n % 2 != 0)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cnt++;
                break;
            }
        }
    }
    else
    {
        for (i = 2; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}