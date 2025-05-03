#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<limits>
#include<algorithm>
using namespace std;
vector<int> Floor_ceil(vector<int>& arr,int x){
    vector<int> ans;
    int floor=-1;
    int ceil=-1;
    int start=0;
    int end=arr.size()-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x){
            floor=ceil=arr[mid];
            // ans.push_back(arr[mid]);
            // ans.push_back(arr[mid+1]);
            break;
        }
        else if(arr[mid]<x){
            floor=arr[mid];
            start=mid+1;
        }
        else{
            ceil=arr[mid];
            end=mid-1;
        }
    }
    ans.push_back(floor);
    ans.push_back(ceil);
    return ans;
}
int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int x;
    cout<<"Enter a integer:";
    cin>>x;
    vector<int> ans=Floor_ceil(arr,x);
    for(int x:ans){
        cout<<x<<" ";
    }
}