#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];  // crete contigous blocks of memory of int of len1 lenght and the address of
    int *right = new int[len2]; // firts block will be pointed by pointer left

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    int leftidx = 0;
    int rightidx = 0;
    int mainidx = s;
    while (leftidx < len1 && rightidx < len2)
    {
        if (left[leftidx] < right[rightidx])
        {
            arr[mainidx++] = left[leftidx++];
        }
        else
        {
            arr[mainidx++] = right[rightidx++];
        }
    }

    while (leftidx < len1)
    {
        arr[mainidx++] = left[leftidx++];
    }

    while (rightidx < len2)
    {
        arr[mainidx++] = right[rightidx++];
    }
}
void merge_sort(int arr[], int s, int e)
{
    // base case
    // s=e
    // s>e
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left sort
    merge_sort(arr, s, mid);

    // right sort
    merge_sort(arr, mid + 1, e);

    // merge 2 sorted arrays
    merge(arr, s, e);
}
int main()
{
    int arr[]={2,3,5,4,8,6,9};
    
    merge_sort(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;

    }
}