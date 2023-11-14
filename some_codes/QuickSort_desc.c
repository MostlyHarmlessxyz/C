void QuickSort_desc(int array[], int low , int high)
{   
    if(low < high) {
        int index = array[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (i < j && array[j] <= index) {
                j--;
            }
            if (i < j) {
                swap(&array[i], &array[j]);
                i++;
            }
            while (i < j && array[i] > index) {
                i++;
            }
            if (i < j) {
                swap(&array[i], &array[j]);
                j--;
            } 
        }
        array[i] = index;
        QuickSort_desc(array, low, i - 1);
        QuickSort_desc(array, i + 1, high);
    }
}
