#include "sort.h"

void selection_sort(double *arr, int size, int flag)
{
    int i, j, least;
    double temp;
    for (i = 0; i < size; i++)
    {
        least = i;
        for (j = i + 1; j < size; j++)
        {
            if (compare(arr[j], arr[least], flag))
            {
                least = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[least];
        arr[least] = temp;
    }
}