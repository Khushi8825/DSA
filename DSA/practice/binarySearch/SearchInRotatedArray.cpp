#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int Search(vector<int>& nums,int target){
    int start=0;
    int end=nums.size()-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        //left half is sorted
        else if(nums[start]<=nums[mid]){
            if(target>=nums[start] && target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        //right half is sorted
        else{
            if(target>nums[mid] && target<=nums[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;//not found
}
int main(){
    vector<int> arr;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    int targetIndex=Search(arr,target);
    cout<<targetIndex;
}
