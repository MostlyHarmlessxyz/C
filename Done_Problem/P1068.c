#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PEOPLES 5010

typedef struct
{
    int num;
    int score;
} people;

people join[PEOPLES];

void swap(people *a, people *b);

void QuickSort_score(people array[], int low, int high);

void QuickSort_num_desc(people array[], int low, int high);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &join[i].num, &join[i].score);
    }

    QuickSort_score(join, 0, n - 1);

    int score_1 = join[0].score;
    int mm = 0;                     // 记录从第几个开始相同
    int cnt = 0;                    // 记录有几个相同的
    for (int i = 1; i < n + 1; i++) // 把最高分的那几个也排序一下
    {
        if (join[i].score == score_1)
        {
            cnt++;
        }
        else
        {
            if (cnt > 0)
            {
                QuickSort_num_desc(join, mm, mm + cnt); // 降序排列
            }
            cnt = 0;
            score_1 = join[i].score;
            mm = i;
        }
    }

    int ok_num = floor(m * 1.5);
    int ok_score = join[n - ok_num].score;
    int ok_people;
    for (int i = 0; i < n; i++)
    {
        if (join[i].score == ok_score)
        {
            ok_people = n - i;
            break;
        }
    }

    printf("%d %d\n", ok_score, ok_people);

    for (int i = n - 1; i >= n - ok_people; i--)
    {
        printf("%d %d\n", join[i].num, join[i].score);
    }
    // 如果成绩相同，则按报名号由小到大的顺序输出 : 如何实现？
    return 0;
}
// Writen by Mostly_Hamrless

void swap(people *a, people *b)
{

    people temp = *a;
    *a = *b;
    *b = temp;
}
void QuickSort_score(people array[], int low, int high)
{
    if (low < high)
    {
        int index = array[low].score;
        int i = low;
        int j = high;
        while (i < j)
        {
            while (i < j && array[j].score >= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].score < index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i].score = index;
        QuickSort_score(array, low, i - 1);
        QuickSort_score(array, i + 1, high);
    }
}
void QuickSort_num_desc(people array[], int low, int high)
{
    if (low < high)
    {
        int index = array[low].num;
        int i = low;
        int j = high;
        while (i < j)
        {
            while (i < j && array[j].num <= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].num > index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i].num = index;
        QuickSort_num_desc(array, low, i - 1);
        QuickSort_num_desc(array, i + 1, high);
    }
}
