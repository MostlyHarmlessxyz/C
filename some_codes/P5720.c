#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld",&a);
    int day = 1; //先来一天
    while (a>1)
    {
        a = a / 2;
        day ++;
    }
    printf("%d\n",day);
return 0;
}
