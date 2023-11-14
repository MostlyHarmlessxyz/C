#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int x, y;
int leap_year[3000];
int cnt;

int isLeapYear(int n);

int main()
{
    scanf("%d %d", &x, &y);
    for (int i = x; i < y + 1; i++)
    {
        if (isLeapYear(i) == 0)
        {
            leap_year[cnt] = i;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", leap_year[i]);
    }
    printf("\n");

    return 0;
}
// Writen by Mostly_Hamrless
int isLeapYear(int n)
{
    if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}