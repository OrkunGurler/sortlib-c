#include "sort.h"

void bubble_sort(double *arr, int size, int flag)
{
    double temp;
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = (size - 1); j > i; j--)
        {
            if (compare(arr[j], arr[j - 1], flag))
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}