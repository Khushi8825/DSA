//wrong code
#include<iostream>
#include<vector>
using namespace std;
int peakelement(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid-1] < arr[mid+1]){
            start = mid+1;
        }
        else {
            end=mid;
        }
        return start;
        
    }
    
}
int main(){
    vector<int> arr{1,2,1,3,5,6,4};
    int peakidx=peakelement(arr);
    cout<<"peak element index:"<<peakidx<<endl;
    cout<<"peak element is:"<<arr[peakidx];
}