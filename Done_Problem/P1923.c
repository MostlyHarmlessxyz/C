#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int num[5000001];

void swap(int *a,int *b);

void QuickSort(int array[], int low , int high);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    QuickSort(num, 0, n - 1);

    printf("%d\n", num[k]);

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