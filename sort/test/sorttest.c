#include "../core/sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *cr_arr(int size);
void print_array(double *arr, int size);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    double *arr;
    int size = 10;

    printf("Bubble Sort\n");
    arr = cr_arr(size);
    bubble_sort(arr, size, 1);
    printf("Sorted Array..: ");
    print_array(arr, size);
    free(arr);

    printf("-----\n");

    printf("Insertion Sort\n");
    arr = cr_arr(size);
    insertion_sort(arr, size, 0);
    printf("Sorted Array..: ");
    print_array(arr, size);
    free(arr);

    printf("-----\n");

    printf("Merge Sort\n");
    arr = cr_arr(size);
    merge_sort(arr, 0, size, 0);
    printf("Sorted Array..: ");
    print_array(arr, size);
    free(arr);

    printf("-----\n");

    printf("Selection Sort\n");
    arr = cr_arr(size);
    selection_sort(arr, size, 1);
    printf("Sorted Array..: ");
    print_array(arr, size);
    free(arr);

    return 0;
}

double *cr_arr(int size)
{
    double *random_arr = (double *)malloc(size * sizeof(double));
    int i;
    for (i = 0; i < size; i++)
    {
        random_arr[i] = ((double)rand() / (double)(RAND_MAX)) * size;
    }
    printf("Set-up Array..: ");
    print_array(random_arr, size);
    return random_arr;
}

int compare(double num1, double num2, int flag) { return (flag == 1 ? num1 <= num2 : num1 > num2); }

void print_array(double *arr, int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%.6f, ", arr[i]);
    }
    printf("%.6f\n", arr[size - 1]);
}