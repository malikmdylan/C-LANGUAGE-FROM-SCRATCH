//selection sort in c
#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main()
{
    int arr[] = {7, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
