#include "sort.h"

void mergeSort(double *arr, int p, int r, int flag)
{
    if (p + 1 < r)
    {
        int q = (int)((p + r) / 2);
        mergeSort(arr, p, q, flag);
        mergeSort(arr, q, r, flag);
        merge(arr, p, q, r, flag);
    }
}

void merge(double *arr, int p, int q, int r, int flag)
{
    int n1 = q - p;
    int n2 = r - q;
    double left[n1 + 1];
    double right[n2 + 1];
    int i, j, k;
    for (i = 0; i < n1; i++)
    {
        left[i] = arr[p + i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[q + j];
    }
    if (flag)
    {
        left[n1] = inf;
        right[n2] = inf;
    }
    i = 0;
    j = 0;
    for (k = p; k < r; k++)
    {
        if (compare(left[i], right[j], flag))
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
    }
}