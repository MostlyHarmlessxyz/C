#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void swap(long long int *a, long long int *b);

void QuickSort(long long int array[], int low, int high);

char dic[30][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a", "both", "another", "first", "second", "third"}; // 对应
int di[30] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 00, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0, 1, 4, 1, 1, 4, 9};

long long int num[10];
char word[100]; // 能有超过100的字母的单词吗？
int main()
{
    int top = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%s", word);
        for (int j = 1; j <= 26; j++)
        {
            if (strcmp(word, dic[j]) == 0)
            {
                num[top] = di[j];
                top++;
                break;
            }
        }
    }
    // 下面的有问题
    
    // QuickSort(num, 0, top - 1);
    // if (num[0] < 10)
    // {
    //     printf("%lld", num[0] % 100);
    // }
    // for (int i = 1; i < top; i++)
    // {
    //     if (num[0] < 10)
    //     {
    //         printf("0%lld", num[0] % 100);
    //     }
    // }

    return 0;
}
// Writen by Mostly_Hamrless

void swap(long long int *a, long long int *b)
{

    long long int temp = *a;
    *a = *b;
    *b = temp;
}
void QuickSort(long long int array[], int low, int high)
{
    if (low < high)
    {
        long long int index = array[low];
        long long int i = low;
        long long int j = high;
        while (i < j)
        {
            while (i < j && array[j] >= index)
            {
                j--;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i] < index)
            {
                i++;
            }
            if (i < j)
            {
                swap(&array[i], &array[j]);
                j--;
            }
        }
        array[i] = index;
        QuickSort(array, low, i - 1);
        QuickSort(array, i + 1, high);
    }
}
