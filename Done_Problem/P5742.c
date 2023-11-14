#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    long long int num;
    int score1;
    int score2;
    int sum_score;
}student;

student HAHA[1000+10];

void isOk(student n);

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d", &HAHA[i].num, &HAHA[i].score1, &HAHA[i].score2);
        HAHA[i].sum_score = HAHA[i].score1 * 7 + HAHA[i].score2 * 3;
    }
    for (int i = 0; i < n; i++)
    {
        isOk(HAHA[i]);
    }
    
    return 0;
}
// Writen by Mostly_Hamrless
void isOk(student n)
{
    if (n.sum_score >= 800 && n.score1 + n.score2 > 140)
    {
        printf("Excellent\n");
    }else
    {
        printf("Not excellent\n");
    }
    return;
}