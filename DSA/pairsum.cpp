#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40};
    vector<int> brr{50,60,30,40};
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<brr.size();i++){
    //     cin>>brr[i];
    // }
    int sum;
    cout<<"Enter the sum you want to find a pair of:";
    cin>>sum;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
           if(arr[i]+brr[j]==sum){
            cout<<arr[i]<<","<<brr[j]<<endl;
             
           }
        }
    }
}