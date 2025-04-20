#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> arr{8,1,20,4,3,50};
    int pivot=arr[0];
    int s=0;
    int e=5;
    int count=0;
    for(int i=0;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    swap(arr[0],arr[count]);

    
    while(s<count && e>count){
        while(arr[s]<pivot) s++;
        while(arr[e]>pivot) e--;
        if(s<count && e>count){
            swap(arr[s],arr[e]);
        }
    } 

    for(auto i: arr){
        cout<<i<<" ";
    }


}