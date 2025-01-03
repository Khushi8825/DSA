#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,3,3,7,8,9};
    int start=0;
    int end =arr.size()-1;
    int mid=start+(end-start)/2;
    int item;
    int ans =-1;
    cout<<"write no. for which we have toh find first occurance";
    cin>>item; 
     while(start<=end){
        if(arr[mid]==item){
          ans=mid;
          end = mid-1;
        }
        else if(arr[mid]>item){
            end =mid-1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
     }
     if(ans == -1){
        cout<<"item not present";
     }
     else{
        cout<< "ans is:" <<ans;
     }
}