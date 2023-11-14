#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
// TLE了
long long int num[100000 + 10];

void swap(long long int *a,long long int *b);

void QuickSort(long long int array[], int low , int high);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &num[i]);
    }
    // TLE TLE
    // int cnt = 0;
    // do
    // {
    //     cnt = 0; // 初始化cnt
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         if (num[i] > num[i + 1])
    //         {
    //             long long int t;
    //             t = num[i + 1];
    //             num[i + 1] = num[i];
    //             num[i] = t;
    //             cnt++;
    //         }
    //     }
    // } while (cnt != 0);
    // QuickSort(num, 0, n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%lld ", num[i]);
    }
    printf("%lld\n", num[n - 1]);
    
    return 0;
}
// Writen by Mostly_Hamrless

void swap(long long int *a,long long int *b)
{
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(long long int array[], int low , int high)
{
    if(low<high){
    long long int index = array[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (i<j && array[j] >= index)
        {
            j--;
        }
        if (i<j)
        {
            swap(&array[i], &array[j]);
            i++;
        }
        while (i<j && array[i]<index)
        {
            i++;
        }
        if(i<j)
        {
            swap(&array[i], &array[j]);
            j--;
        } 
    }
    array[i] = index;
    QuickSort(array,low,i-1);
    QuickSort(array,i+1,high);
    }
}


