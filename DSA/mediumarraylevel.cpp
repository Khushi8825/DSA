#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the size of array";
    cin>>n;
    int key;
    cin>>key;
    vector<int> arr{10,20,30,40,50,60,70,80,90};
    for(int i=0;i<arr.size();i++){
        if(arr[i]>key){
            cout<<arr[i];
            break;
        }
        else if(arr[i]==key){
            cout<<arr[i];
            break;
        }
                  
    }
}
