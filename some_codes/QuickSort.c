#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
void swap(int *a,int *b);

void QuickSort(int array[], int low , int high);

int main()
{ 
    int n,i;
    srand((unsigned long)time(0));
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i <n; i++)
    {
        array[i]=rand() % 10000;
        printf("%d ",array[i]);
        if (i == n-1)
        {
            printf("\n");
        }
    }
    QuickSort(array,0,n-1);
    for ( i = 0; i <n; i++)
    {
        printf("%d ",array[i]);
    }
    
return 0;
}
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

