#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[200];
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    //cout<<"enter the elements";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}