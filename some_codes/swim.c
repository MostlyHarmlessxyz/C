#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e = c - a; // 可以把e,f的运算扔到if里，可以快1ms
    int f = d - b;
    if (f < 0)
    {
        e = e - 1;
        f = f + 60;
    }
    printf("%d %d\n",e,f);
    return 0;
}