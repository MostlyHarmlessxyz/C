#include <stdio.h>

int daynum(int year, int month);

int main(void)
{
    int day_num = 0; // 1800.1.1 - year.month.1 隔了多少天
    int year = 2001;
    int month = 3;
    for (int i = 2000; i < year; i++) // 1800.1.1 - year.1.1
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            day_num += 366;
        }else
        {
            day_num += 365;
        }
    }
    for (int i = 1; i < month; i++)
    {
        day_num += daynum(year,i);
    }
    printf("%d\n",day_num);
    return 0;
}

int daynum(int year, int month)
{
    int day = 0;
    switch (month)
    {
    case 1:
        day = 31;
        break;
    case 2:
        day = 28;
        break;
    case 3:
        day = 31;
        break;
    case 4:
        day = 30;
        break;
    case 5:
        day = 31;
        break;
    case 6:
        day = 30;
        break;
    case 7:
        day = 31;
        break;
    case 8:
        day = 31;
        break;
    case 9:
        day = 30;
        break;
    case 10:
        day = 31;
        break;
    case 11:
        day = 30;
        break;
    case 12:
        day = 31;
        break;
    default:
        break;
    }
    if (((year % 100 == 0 && (year / 100) % 4 == 0) || (year % 100 != 0 && year % 4 == 0)) && day == 28)
    {
        return day + 1;
    }else
    {
        return day;
    }
    
}