#include<iostream>
#include<vector>
using namespace std;
int searchelement(vector<int>& arr,int target){
   int start=0;
   int end = arr.size()-1;
   int mid=start+(end-start)/2;
   while(start<=mid){
    if(arr[mid]==target) return mid;
    
    else if(arr[mid-1]>start && arr[mid-1]==target) 
     return mid-1;

    else if(mid+1< end && arr[mid+1]==target) 
     return mid+1;

    //right serach
    else if(target>arr[mid]) 
     start = mid+2;
    //left search
    else
     end = end-2;
    mid = start+(end-start)/2;
   }
   return -1;
}
int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target;
    cout<<"Enter the number to be searched:";
    cin>>target;
    int index=searchelement(arr,target);
    cout<<"value is stored at index:"<<index;
    
}