#include <stdio.h>

int main()
{
    int x ,n; // x为周几，n为天数
    scanf("%d %d",&x,&n);
    int hours;
    int week;
    int day;
    day = n % 7;
    week = (n - day) / 7;
    int d = 6 - x;
    if (day >= d) // if day = 3 d =3
    {
        if (day == d)
        {
            hours = ((week * 5) + (day)) * 250;
        }else{
            hours = ((week * 5) + (day - 1)) * 250;
        }
    }else{
        hours = ((week * 5) + day) * 250;
    }
    printf("%d\n",hours);
return 0;
}
// 1 2 3 4 5 6 7
//day=  n % 7 = 4 |  6 - 3 = 3
// 3 10 1+ 3  6-3 =3 
// 3 13 1 + day=6  d=6-3= 3