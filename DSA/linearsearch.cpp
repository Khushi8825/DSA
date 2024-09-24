#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
          if(arr[i]==key)
          return true;
    }
    return false;
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the item to find:";
    cin>>key;
    if(find(arr,n,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"not found";
    }

}