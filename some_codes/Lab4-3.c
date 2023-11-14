#include <stdio.h>

int getPeachNumber(int n);
int DAY = 9;
int peach;
int main()
{
    int num = getPeachNumber(1);

    printf("猴子第一天摘了:%d个桃子。\n", num);
    return 0;
}

int getPeachNumber(int n)
{
    peach = (n + 1) * 2;
    printf("第%d天所剩桃子%d个\n", DAY, peach);
    if (DAY != 1)
    {
        DAY--;
        getPeachNumber(peach);
    }
    return peach;
}