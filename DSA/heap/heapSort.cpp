#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int idx = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    int largest = idx;

    if(left < n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest != idx){
        swap(arr[idx],arr[largest]);
        idx = largest;
        heapify(arr,n,idx);
    }
    else{
        return;
    }

}
void heapSort(int arr[], int n){
    //creating max heap of the array
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    //sorting the max heap of the array to give array which is sorted
    int idx = n-1;

    while(n != 0){
        swap(arr[0],arr[idx]);
        idx--;
        n--;

        heapify(arr,n,0);
    }
}
int main(){
    int arr[] = {50,100,60,20,40,45,55,5,10};
    heapSort(arr,9);
    for(auto i : arr){
        cout<< i << " ";
    }
}