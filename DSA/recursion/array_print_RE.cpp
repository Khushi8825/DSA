#include<iostream>
#include<string>
#include<vector>
using namespace std;
//straight traversing
void print(int arr[],int n,int i){
    if(i>=n){
        return;
    }

    cout<<arr[i]<<" ";

    print(arr,n,i+1);
}

//reverse traversing
void printreverse(int arr[],int n,int i){
    if(i>=n){
        return;
    }

    printreverse(arr,n,i+1);

    cout<<arr[i]<<" ";
}

int main(){  
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
     int arr[n];
    cout<<" enter array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    cout<<"Straight Traversing:";
    print(arr,n,i);
    cout<<endl;
    cout<<"Reverse Traversing:";
    printreverse(arr,n,i);

}

