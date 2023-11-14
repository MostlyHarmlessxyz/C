#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define NUM 5
typedef struct 
{
    char name[1000];
    int age;
    int score;
}luogu;

luogu people[NUM];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", people[i].name, &people[i].age, &people[i].score);
        people[i].age++;
        people[i].score = ((people[i].score * 6 / 5) > 600) ? 600 : (people[i].score * 6 / 5);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", people[i].name, people[i].age, people[i].score);
    }
    
    return 0;
}
// Writen by Mostly_Hamrless