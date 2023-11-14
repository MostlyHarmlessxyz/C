#include <stdio.h>
#define monthcash 300
int main()
{
    int money[12];
    int i;
    int bank = 0;
    int jinjin = 0; // jinjin手头有的钱
    int month = 0; 
    int BUG = 0; //修BUG用的
    for ( i = 0; i < 12; i++)
    {
        scanf("%d",&money[i]); // 预算
        if (300 - money[i] + jinjin >= 100) // 如果除去预算够100
        {
            int trans = 0;
            trans = ((300 + jinjin - money[i] ) / 100) *100; // 存入银行的钱
            bank += trans;
            jinjin += 300 - money[i] -trans;// 计算月底剩余的钱 
        }else {
            jinjin += 300 - money[i];
        }
        // printf("jinjin = %d,bank = %d. month = %d\n",jinjin,bank,i+1); // debug
        if (jinjin < 0 && BUG == 0)
        {
            month = i+1;
            BUG = 1;
        }
    }
    if (month != 0)
    {
        printf("-%d\n",month);
    }else{
        double out = bank*1.2+jinjin*1.0;
        if (out - (int)out != 0)
        {
            printf("%f\n",out);
        }else{
            printf("%d\n",(int)out);
        }
    }
    return 0;
}

/*
    记录一下，第一次submit只有80，有两个数据点没有过。原因是在“month = i+1”这里，
    如果连续几个月都破产了（因为输入没法中断），这个month会一直++下去。我们要保证这个if至多执行一次，
    于是就定义了BUG这个变量（不大吉利的样子），如果IF语句被执行一次，BUG++，同时在IF语句条件中，
    &&一个与BUG有关的条件condition，就万事大吉了。20230921
*/ 

