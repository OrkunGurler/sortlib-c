#include "sort.h"

void selection_sort(int *arr, int size, int flag)
{
    int i, j, least, temp;
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