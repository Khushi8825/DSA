#include <stdio.h>
#include <limits.h>
int main()
{   int n=7;
    int arr[] = {2, 8, 6, 4, 5, 3, 7};
    printf("unsorted array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        if(minidx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
    }
    printf("\nsorted array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}