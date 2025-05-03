//left rotate array by one element
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40,50};
    int k=3;
    vector<int> ans(5);
    for(int i=0;i<arr.size();i++){
        ans[(i+k)%5] = arr[i];
    }

    // int start=0;
    // int end=arr.size()-1;
    
    // for(int i=0;start!=end;i++){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    for(auto val:ans){
        cout<<val<<" ";
    }

}