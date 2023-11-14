#include <stdio.h>

int main()
{
    int school[7];
    int mom[7];
    int mood[7];
    int big;
    int num;
    int cnt=0;
    int i;
    for ( i = 0; i < 7; i++)
    {
        scanf("%d %d",&school[i],&mom[i]);
        mood[i] = school[i] + mom[i] - 8; // 不高兴的时长 可为负
    }
    for ( i = 0; i < 7; i++)
    {
        if (mood[i] >0) // 注意应该为 > 0 不带等号
        {
            cnt++;  // 判断有无不高兴的时候
        }
    }

    if (cnt == 0) // 没有不高兴的时候
    {
        printf("0\n");
    }else{        //有不高兴的时候
        big = mood[0];
        num = 0;
        for ( i = 1; i < 7; i++)//取出最大的那个数字
        {
            if (big < mood[i]) 
            {
                big = mood[i];
                num = i;
            }
        }
        printf("%d\n",num+1);
    }
    
return 0;
}
