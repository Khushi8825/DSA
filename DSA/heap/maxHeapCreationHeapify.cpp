#include<iostream>
using namespace std;
void heapify(int arr[],int n, int i){
    int index = i;
    int leftidx = 2*i;
    int rightIdx = 2*i + 1;
    int largest = index;

    if(leftidx < n && arr[largest] < arr[leftidx]){
        largest = leftidx;
    }
    if(rightIdx < n && arr[largest] < arr[rightIdx]){
        largest = rightIdx;
    }
    if(index != largest){
        swap(arr[index],arr[largest]);
        index = largest;
        heapify(arr,n,index);
    }
}
int main(){
    int arr[] = {50,60,70,80,90,10,12,15,11,13,8,6,2};
    int n = 13;
    int i = n/2;
    while(i>=0){
        heapify(arr,n,i);
        i--;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}