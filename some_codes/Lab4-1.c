// Print Cadenlar
#include <stdio.h>
#include <ctype.h>

int year;
int month;
void readInput(void);
void printMonth(int year, int month);
int getStartDay(int year, int month);
void printMonthTitle(int year, int month);
int daynum(int year, int month);

int main(void)
{
    readInput();             // 读入年份与月数
    printMonth(year, month); // 打印月份
}

void readInput(void)
{
    printf("Please input the year: ");
    scanf("%d", &year);
    printf("Please input the month: ");
    scanf("%d", &month);
    return;
}

void printMonthTitle(int year, int month)
{
    // January、February、
    // March、April、May、June、July、
    // August、September、October、
    // November、December。 November
    printf("          ");
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        break;
    }
    printf("     %d\n", year);
    printf("------------------------------------\n");
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");
}

void printMonth(int year, int month)
{
    printMonthTitle(year, month);
    int day_count = daynum(year, month);      // 这个月份的天数
    int first_day = getStartDay(year, month); // 这个月第一天是周几
    int space = 3 + 5 * first_day;
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    for (int i = 1; i < 9; i++) // 打印前 10 天，你妈的 要对齐
    {
        printf("%d    ",i);
        if (first_day == 6)
        {
            printf("\n");
            printf("   ");
            first_day = 0;
        }
        else
        {
            first_day++;
        }
    }
    for (int i = 9; i < day_count + 1; i++)
    {
        printf("%d   ",i);
        if (first_day == 6)
        {
            printf("\n");
            printf("  ");
            first_day = 0;
        }
        else
        {
            first_day++;
        }
    }
}

int daynum(int year, int month)
{
    int day;
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
    }
    else
    {
        return day;
    }
}

int getStartDay(int year, int month)
{
    int day_num = 0;                  // 1800.1.1 - year.month.1 隔了多少天
    for (int i = 1800; i < year; i++) // 1800.1.1 - year.1.1
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            day_num += 366;
        }
        else
        {
            day_num += 365;
        }
    }
    for (int i = 1; i < month; i++)
    {
        day_num += daynum(year, i);
    }
    int week = (3 + day_num) % 7;
    return week;
}
