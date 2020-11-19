#include "sort.h"

void insertion_sort(double *arr, int size, int flag)
{
    int temp;
    int i, j;
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && compare(temp, arr[j], flag))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}