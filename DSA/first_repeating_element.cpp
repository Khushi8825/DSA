#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int firstRepeating(int arr[10],int n){
    unordered_map<int,int>hash;
    
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    for (int i=0; i<n; i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
  return -1;
}
int main(){
int arr[10]={1,2,3,4};
int n=4;
int u=firstRepeating(arr,n);
cout<<u;
}