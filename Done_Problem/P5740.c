#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
char temp[9];
char name[9];
int ch, math, eng;
int t1, t2, t3;
int max = -1; // 傻逼学生可能都得0分，超耐磨的
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", temp);
        scanf("%d %d %d", &t1, &t2, &t3);
        int sum = t1 + t2 + t3;
        if (sum > max)
        {
            max = sum;
            for (int i = 0; i < 9; i++)
            {
                name[i] = '\0';
            }
            strcpy(name, temp);
            ch = t1;
            math = t2;
            eng = t3;
        }
        for (int i = 0; i < 9; i++)
        {
            temp[i] = '\0';
        }
    }
    printf("%s %d %d %d\n", name, ch, math, eng);

    return 0;
}
// Writen by Mostly_Hamrless