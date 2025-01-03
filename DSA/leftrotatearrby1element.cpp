//left rotate array by one element
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40,50};

    int start=0;
    int end=arr.size()-1;
    
    for(int i=0;start!=end;i++){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(auto val:arr){
        cout<<val<<" ";
    }

}