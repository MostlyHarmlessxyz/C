#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int num[110];
int array[1100];
int sorted_num[110];

int m;

int main()
{
    // 使用当前时间作为种子，确保每次运行程序时都会得到不同的随机数序列
    // srand((unsigned int)time(NULL));

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        array[num[i]]++;
    }
    for (int i = 1; i < 1001; i++)
    {
        if (array[i] > 0)
        {
            sorted_num[m] = i;
            m++;
        }
    }
    printf("%d\n", m);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", sorted_num[i]);
    }
    printf("\n");
    return 0;
}
// Writen by Mostly_Hamrless