#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define NUM 3

double x[NUM];
double y[NUM];
double dis[NUM];
double length;
int main()
{
    for (int i = 0; i < NUM; i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }
    for (int i = 0; i < NUM; i++)
    {
        dis[i] = sqrt(pow(x[(i + 1)%NUM] - x[i], 2) + pow(y[(i + 1)%NUM] - y[i], 2));
    }
    for (int i = 0; i < NUM; i++)
    {
        length += dis[i];
    }
    printf("%.2lf\n",length);
    
    return 0;
}
// Writen by Mostly_Hamrlessp