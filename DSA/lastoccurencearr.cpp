#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,3,4,4,4,4,5,6};
    int start=0;
    int end=arr.size()-1;
    int mid= start+(end-start/2);
    int ans =-1;
    int item;
    cout<<"Enter the no. whose last is to be found";
    cin>>item;
    while(start<=end){
        if(arr[mid]==item){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<item){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    mid=start+(end-start)/2;
    }
    if(ans==-1){
        cout<<"item not found";
    }
    else{
        cout<<"ans is:"<<ans;
    }
}