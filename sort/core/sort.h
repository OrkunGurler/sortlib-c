#define inf 0xFFFFFFFF

int compare(int num1, int num2, int flag) { return (flag == 1 ? num1 <= num2 : num1 > num2); }

void bubble_sort(double *arr, int size, int flag);

void insertion_sort(int *arr, int size, int flag);

void merge(double *arr, int p, int q, int r, int flag);
void merge_sort(double *arr, int p, int r, int flag);

void selection_sort(int *arr, int size, int flag);