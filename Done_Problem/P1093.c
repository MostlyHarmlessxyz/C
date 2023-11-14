#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define NUM 310

typedef struct 
{
    int number;
    int ch;
    int math;
    int eng;
    int sum;
}students;

students peoples[NUM];

void swap(students *a, students *b);

void QuickSort_score(students array[], int low, int high);

void QuickSort_ch(students array[], int low, int high);



int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &peoples[i].ch, &peoples[i].math, &peoples[i].eng);
        peoples[i].sum = peoples[i].ch + peoples[i].math + peoples[i].eng;
        peoples[i].number = i + 1;
    }
    QuickSort_score(peoples, 0, n - 1);

    int score_1 =peoples[0].sum;
    int mm = 0;                     // 记录从第几个开始相同
    int cnt = 0;                    // 记录有几个相同的
    for (int i = 1; i < n + 1; i++) // 把最高分的那几个也排序一下
    {
        if (peoples[i].sum == score_1)
        {
            cnt++;
        }
        else
        {
            if (cnt > 0)
            {
                QuickSort_ch(peoples, mm, mm + cnt); // 升序排列
            }
            cnt = 0;
            score_1 = peoples[i].sum;
            mm = i;
        }
    }
    for (int i = n - 1; i > n - 6; i--)
    {
        printf("%d %d\n", peoples[i].number, peoples[i].sum);
    }
    


    return 0;
}
// Writen by Mostly_Hamrless
void swap(students *a, students *b)
{
    students temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort_score(students array[], int low, int high)
{
    if (low < high)
    {
        int index = array[low].sum;
        int i = low;
        int j = high;
        while (i < j)
        {
            while (i < j && array[j].sum >= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].sum < index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i].sum = index;
        QuickSort_score(array, low, i - 1);
        QuickSort_score(array, i + 1, high);
    }
}

void QuickSort_ch(students array[], int low, int high)
{
    if (low < high)
    {
        int index = array[low].ch;
        int i = low;
        int j = high;
        while (i < j)
        {
            while (i < j && array[j].ch >= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].ch < index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i].ch = index;
        QuickSort_ch(array, low, i - 1);
        QuickSort_ch(array, i + 1, high);
    }
}