#include<iostream>
#include<string>
#include<vector>

using namespace std;

void printsubarray(vector<int> &  nums,int start,int end){
    //base
    if(end == nums.size()){
        return;
    }
    //1 case sol
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    printsubarray(nums,start,end+1);
    // start++;
    // printsubarray(nums,start,end);

    // for(int start=1;start<nums.size();start++){
    // printsubarray(nums,start,end+1);
    // }
    
}
void printsubaaray_lite(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        printsubarray(nums,start,end);
    }
}
int main(){
    vector<int> nums={1,2,3,4,5};
    int start=0;
    int end=0;
    printsubaaray_lite(nums);
}