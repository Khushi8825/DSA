#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
         cout<<arr[i]<<" ";
    }
}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}