#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int x;
    int y;
    int z;
} point;

point s[50010];

void swap(point *a, point *b);

void QuickSort(point array[], int low, int high);

double distance;

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &s[i].x, &s[i].y, &s[i].z);
    }
    QuickSort(s, 0, n - 1);

    for (int i = 1; i < n; i++)
    {
        distance += sqrt(pow(s[i].x - s[i - 1].x, 2) +pow(s[i].y - s[i - 1].y, 2) +pow(s[i].z - s[i - 1].z, 2) );
    }
    
    printf("%.3f\n", distance);

    return 0;
}
// Writen by Mostly_Hamrless

void swap(point *a, point *b)
{

    point temp = *a;
    *a = *b;
    *b = temp;
}
void QuickSort(point array[], int low, int high)
{
    if (low < high)
    {
        int index = array[low].z;
        int i = low;
        int j = high;
        while (i < j)
        {
            while (i < j && array[j].z >= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i].z < index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i].z = index;
        QuickSort(array, low, i - 1);
        QuickSort(array, i + 1, high);
    }
}
