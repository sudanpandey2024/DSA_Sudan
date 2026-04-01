#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 3, 1, 9, 11, 10, 4};
    int n = 7

    printf("Array before sort:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array after sort:\n");
    printArray(arr, n);

    return 0;
}
