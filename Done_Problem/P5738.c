#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

double max_score;

double getScore(int m);

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int cnt = 0;
    while (cnt < n)
    {
        double p = getScore(m);
        cnt++;
        max_score = (max_score < p) ? p : max_score;
    }
    printf("%.2lf\n", max_score);
    
    return 0;
}
// Writen by Mostly_Hamrless
double getScore(int m)
{
    int max = 0;
    int min = 10;
    int score;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &score);
        sum += score;
        max = (max < score) ? score : max;
        min = (min > score) ? score : min;
    }
    double final_score = ((sum - max - min) * 1.0 ) / (m - 2);
    return final_score;
}