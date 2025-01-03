#include<iostream>
#include<vector>
using namespace std;
int lastoccurence(vector<int>& arr,int item){
     int start=0;
    int end=arr.size()-1;
    int mid= start+(end-start/2);
    int ans =-1;
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
    return ans;

}
int firstoccurence(vector<int>& arr,int item){
    
    int start=0;
    int end=arr.size()-1;
    int mid= start+(end-start/2);
    int ans2 = -1;
     while(start<=end){
        if(arr[mid]==item){
          ans2=mid;
          end = mid-1;
        }
        else if(arr[mid]>item){
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
     }
     return ans2;

}
int main(){
    vector<int> arr{1,2,3,3,3,3,3,3,3,4,5,6};
    int item;
    cin>>item;
    int first=firstoccurence(arr,item);
    int last=lastoccurence(arr,item);
    cout<<last-first+1;
}
