#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
    int num; // 票面
    int times; // 次数
}
votes;

votes people[1010];

void swap(votes *a, votes *b);

void QuickSort(votes array[], int low , int high);


int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int tmp;

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        people[tmp].num = tmp;
        people[tmp].times++;
    }
    QuickSort(people, 1, n);
    for (int i = 1; i < n + 1; i++)
    {
        if (people[i].times != 0)
        {
            for (int j = 0; j < people[i].times; j++)
            {
                printf("%d ",people[i].num);
            }
        }
    }
    
    
    return 0;
}
// Writen by Mostly_Hamrless

void swap(votes *a, votes *b){
    
    votes temp = *a;
    *a = *b;
    *b = temp;

}
void QuickSort(votes array[], int low , int high)
{   
    if(low<high){
    int index = array[low].num;
    int i = low;
    int j = high;
    while (i<j)
    {
        while (i<j && array[j].num >= index)
        {
            j--;
        }
        if (i<j)
        {
            swap(&array[i], &array[j]);
            i++;
        }
        while (i<j && array[i].num<index)
        {
            i++;
        }
        if(i<j)
        {
            swap(&array[i], &array[j]);
            j--;
        } 
    }
    array[i].num = index;
    QuickSort(array,low,i-1);
    QuickSort(array,i+1,high);
    }
}

