#include <iostream>
#include <vector>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivotElement = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    int rightIDX = s + count;
    swap(arr[s], arr[rightIDX]);

    int i = s;
    int j = e;

    while (i < rightIDX && j > rightIDX)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        if (i < rightIDX && j > rightIDX)
        {
            swap(arr[i], arr[j]);
        }
    }
    return rightIDX;
}
void quick_sort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;
    // partition logic
    int pivotIDX = partition(arr, s, e);

    // recursive logic
    // left recusrion
    quick_sort(arr, s, pivotIDX - 1);

    // right recursion
    quick_sort(arr, pivotIDX + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 5, 20, 30, 50};
    int n = 7;
    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}