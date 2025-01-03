#include<iostream>
#include<vector>
using namespace std;
 vector<int> removeDuplicate(int *arr,int n){
    vector<int> ans;
    if(n==0) return ans;
    int i=0;
    while(i<n){
        if( i+1>=n || arr[i]!=arr[i+1]){
            
            ans.push_back(arr[i]);
            i++;
        }
        else {
            i++;
        }
    }
    return ans;
 }
 int main (){
  int a[100]; 
  int n;
  cout<<"Enter the size od array:";
  cin>>n; 
  cout<<"enter the elements of array:";
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  vector<int> ans=removeDuplicate(a,n);
  for(int i:ans){
    cout<<i<<" ";
  }

 }