/*
#include <stdio.h>

int main()
{
    int year,month;
    int u = 0; // 1为闰，0位正常
    scanf("%d %d",&year,&month);
    if (year % 100 == 0)//判断是不是整百
    {
        if (year % 4 == 0 )//判断是不是闰年
            u = 1;
    }else{
        if (year % 4 == 0 )//判断是不是闰年
            u = 1;
    }

    if (u == 1)
    {
        switch (month)
        {
        case 1:case 3:case 5:case 7: case 8: case 10: case 12:
            printf("31\n");
            break;
        case 2:
            printf("29\n");
            break;
        default:
            printf("30\n");
            break;
        }
    }else{
        switch (month)
        {
        case 1:case 3:case 5:case 7: case 8: case 10: case 12:
            printf("31\n");
            break;
        case 2:
            printf("28\n");
            break;
        default:
            printf("30\n");
            break;
        }
    }
return 0;
}
以上是废物代码。 80/100
*/

#include <stdio.h>

int main()
{
    int year,month;
    int u = 0; // 1为闰，0位正常
    scanf("%d %d",&year,&month);
    int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 4 == 0 && year % 400 != 0 || year % 400 == 0)
        day[2] = 29;
    printf("%d\n",day[month]);
    return 0;
}


