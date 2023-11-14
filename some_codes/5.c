#include <stdio.h>
#include <stdlib.h>

void Swap(int Array[], int i, int j)
{
    int temp = Array[i];
    Array[i] = Array[j];
    Array[j] = temp;
}

int Partition(int Array[], int i, int j)
{
    int low = i + 1;
    int high = j;
    while (low <= high)
    {
        while (low <= j && Array[low] <= Array[i])
        {
            low++;
        }
        while (high > i && Array[high] >= Array[i])
        {
            high--;
        }
        if (low < high)
        {
            Swap(Array, low, high);
        }
    }
    Swap(Array, i, high);
    return high;
}


void quick_sort(int Array[], int i, int j)
{
    if (j <= i)
    {
        return;
    }
    int shift = rand() % (j - i + 1);
    Swap(Array, i, i + shift);
    int k = Partition(Array, i, j);
    quick_sort(Array, i, k - 1);
    quick_sort(Array, k + 1, j);
}

int main()
{
    int n, i;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, n - 1);
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[n - 1]);
    return 0;
}
