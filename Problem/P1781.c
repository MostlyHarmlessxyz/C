#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
// 高精度

typedef struct 
{
    int rank;
    char num[110];
    int length;
}
people;

people s[30];
int Max;

int cnt = -1;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s[i].rank = i + 1;
        fgets(s[i].num, 110, stdin);
        s[i].length = strlen(s[i].num);
    }
    for (int i = 100; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j].num[i] > Max)
            {
                Max = s[j].num[i];
                cnt = j;
            }
        }
        if (cnt != -1)
        {
            break;
        }
    }
    printf("%s\n", s[cnt].num);
    return 0;
}
// Writen by Mostly_Hamrless    