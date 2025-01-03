#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    for(int i=0;start<=end;i++){
        if(start==end) {
            cout<<arr[start];
            break;
        }
        
        else{
             cout<<arr[start]<<" ";
             cout<<arr[end]<<" ";
             start++;
             end--;
        }
    }

}