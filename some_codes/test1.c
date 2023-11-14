// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // 交换两个元素的函数
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // 分区函数，用于将数组分为两部分，返回中间元素的索引
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = (low - 1);

//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// // 快速排序函数
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int n;
//     printf("请输入数组大小：");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     // 随机生成数组
//     srand(time(NULL));
//     for (int i = 0; i < n; i++) {
//         arr[i] = rand() % 100;  // 生成0到99的随机整数
//     }

//     printf("未排序数组：\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     clock_t start_time = clock();
//     quickSort(arr, 0, n - 1);
//     clock_t end_time = clock();
    
//     double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    
//     printf("已排序数组：\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     printf("排序花费时间：%f秒\n", total_time);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);
void QuickSort(int array[], int low, int high);

int main() {
    int n, i;
    srand((unsigned long)time(0));
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        array[i] = rand() % 1000;
        printf("%d ", array[i]);
        if (i == n - 1) {
            printf("\n");
        }
    }
    QuickSort(array, 0, n - 1);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int array[], int low, int high) {
    if (low < high) {
        int pivot = array[low]; // Choose the pivot as the first element
        int i = low + 1;        // Start from the element after the pivot
        int j = high;

        while (i <= j) {
            while (i <= j && array[i] <= pivot) {
                i++;
            }
            while (i <= j && array[j] > pivot) {
                j--;
            }
            if (i < j) {
                swap(&array[i], &array[j]);
            }
        }

        // Swap the pivot with the element at position j
        swap(&array[low], &array[j]);

        // Recursively sort the two sub-arrays
        QuickSort(array, low, j - 1);
        QuickSort(array, j + 1, high);
    }
}

