// 统计数字出现次数

#include <stdio.h>


int main()
{
    int x;
    int count[10];
    int i;
    for ( i = 0; i < 10; i++) //数组初始化
    {
        count[i] = 0;
    }
    
    scanf("%d",&x);
    while (x != -1)
    {
        if (x>=0 && x<=9)
        {
            count[x]++;
        }
        scanf("%d",&x);
    }
    for ( i = 0; i < 10; i++) //遍历输出数组
    {
        printf("%d:%d\n",i,count[i]);
    }
    
    return 0;
}

// for的作用就是 遍历 数组
// 无论是 初始化 还是 最后的输出
