#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
    int rank;
    char name[25];
    int year;
    int month;
    int day;
    int birth;
}people;

people oi[110];

void swap(people *a, people *b);

void QuickSort(people array[], int low , int high);

void QuickSort_desc(people array[], int low , int high);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", oi[i].name, &oi[i].year, &oi[i].month, &oi[i].day);
        oi[i].rank = i;
        oi[i].birth = oi[i].year * pow(10, 4) + oi[i].month * pow(10, 2) + oi[i].day;
    }
    QuickSort(oi, 0, n - 1);

    int birth_1 = oi[0].birth;
    int mm = 0;                     // 记录从第几个开始相同
    int cnt = 0;                    // 记录有几个相同的
    for (int i = 1; i < n + 1; i++) // 把最高分的那几个也排序一下
    {
        if (oi[i].birth == birth_1)
        {
            cnt++;
        }
        else
        {
            if (cnt > 0)
            {
                QuickSort_desc(oi, mm, mm + cnt); // 降序排列
            }
            cnt = 0;
            birth_1 = oi[i].birth;
            mm = i;
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%s\n", oi[i].name);
    }
    

    
    return 0;
}
// Writen by Mostly_Hamrless

void swap(people *a, people *b)
{
    people temp = *a;
    *a = *b;
    *b = temp;

}

void QuickSort(people array[], int low , int high)
{   
    if(low<high){
    int index = array[low].birth;
    int i = low;
    int j = high;
    while (i<j)
    {
        while (i<j && array[j].birth >= index)
        {
            j--;
        }
        if (i<j)
        {
            swap(&array[i], &array[j]);
            i++;
        }
        while (i<j && array[i].birth<index)
        {
            i++;
        }
        if(i<j)
        {
            swap(&array[i], &array[j]);
            j--;
        } 
    }
    array[i].birth = index;
    QuickSort(array,low,i-1);
    QuickSort(array,i+1,high);
    }
}

void QuickSort_desc(people array[], int low , int high)
{   
    if(low < high) {
        int index = array[low].rank;
        int i = low;
        int j = high;
        while (i < j) {
            while (i < j && array[j].rank <= index) {
                j--;
            }
            if (i < j) {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].rank > index) {
                i++;
            }
            if (i < j) {
                swap(&array[i], &array[j]);
                j--;
            } 
        }
        array[i].rank = index;
        QuickSort_desc(array, low, i - 1);
        QuickSort_desc(array, i + 1, high);
    }
}


