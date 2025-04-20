#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n;
   cout<<"enter the size of arr: ";
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<int> res;
   for(int i=0;i<n;i++){
    int count=0;
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            count++;
        }
    }
    res.push_back(count);
   }
   
   for(auto i:res){
    cout<<i<<" ";
   }
   return 0;

}