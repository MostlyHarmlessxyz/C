// 班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1 元 9 角，而班主任给小玉的钱是 a 元 b 角.

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c = 10*a + b;
    int d=1;
    for(;c > 19; c = c - 19)
    {
        d = d + 1;
    }
    printf("%d\n",d);
    return 0;
}