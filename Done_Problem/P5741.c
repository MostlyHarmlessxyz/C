#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define NUM 1000 + 10
#define MAX_NAMELENGTH 10
int pair[NUM][NUM];
char name[NUM][MAX_NAMELENGTH];
int ch[NUM], math[NUM], eng[NUM], sum[NUM];
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        return 250; // 就一个人，还比？比**呢
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d %d %d", name[i], &ch[i], &math[i], &eng[i]);
            sum[i] = ch[i] + math[i] + eng[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (pow((ch[i] - ch[j]), 2) <= 25 && pow((math[i] - math[j]), 2) <= 25 && pow((eng[i] - eng[j]), 2) <= 25 && pow((sum[i] - sum[j]), 2) <= 100)
                {
                    pair[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pair[i][j] == 1)
                {
                    printf("%s %s\n", name[i], name[j]);
                }
            }
        }
    }
    return 0;
}
// Writen by Mostly_Hamrless