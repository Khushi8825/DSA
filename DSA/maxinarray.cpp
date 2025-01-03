#include<iostream>
#include <climits>
using namespace std;
void maximum(int arr[],int size){
    int maxNum=INT_MIN;
        
    for(int i=0;i<size;i++){
        if(maxNum<arr[i]){
            maxNum=arr[i];
        }
    }
    cout<<"max number is:"<<maxNum;
}
int main(){
    int n,arr[100];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maximum(arr,n);
    // int maxNum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(maxNum<arr[i]){
    //         maxNum=arr[i];
    //     }
    // }
    // cout<<"max number is:"<<maxNum;

}