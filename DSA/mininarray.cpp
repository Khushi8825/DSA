#include<iostream>
#include <climits>
using namespace std;
void minimum(int arr[],int size){
    int minNum=INT_MAX;
        
    for(int i=0;i<size;i++){
        if(minNum>arr[i]){
            minNum=arr[i];
        }
    }
    cout<<"min number is:"<<minNum;
}
int main(){
    int n,arr[100];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minimum(arr,n);
}