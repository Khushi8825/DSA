#include<iostream>
using namespace std;
int main(){
    int arr[200];
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"double of input elements are:"<<endl;
    for(int i=0;i<n;++i){
        cout<<2*arr[i]<<" ";
    }

}