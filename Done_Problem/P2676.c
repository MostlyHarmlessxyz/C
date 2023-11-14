#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void swap(int *a,int *b);

void QuickSort(int array[], int low , int high);

int h[20010];
int main()
{
    int n,b;
    scanf("%d %d", &n, &b);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    QuickSort(h, 0, n - 1);

    int tmp = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        tmp += h[i];
        if (tmp >= b)
        {
            printf("%d\n", n - i);
            break;
        }
    }
    return 0;
}
// Writen by Mostly_Hamrless

void swap(int *a,int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;

}
void QuickSort(int array[], int low , int high)
{   
    if(low<high){
    int index = array[low];
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

