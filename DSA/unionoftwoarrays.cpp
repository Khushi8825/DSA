#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void pushfunction(vector<int>arr,vector<int>brr);
int main(){
    int n;
    vector<int> arr(n);
    
    cout<<"Enter the size of of aaray: ";

    cin>>n;
    int m;
    cout<<"Enter the size of array: ";
    cin>>m;

    cout<<"Enter the elements of first array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    vector<int>brr;
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<brr.size();i++){
        cin>>brr[i];
    }
    pushfunction(arr,brr);
}
void pushfunction(vector<int>arr , vector<int>brr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
    int element = arr[i];
    for(int j=0;j<brr.size();j++){
        if(element == brr[j]){
            brr[j] = INT_MIN;
        }
    }
}
    for(int i=0;i<arr.size();i++){
         ans.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
           ans.push_back(brr[i]); 
        }

       for(int i=0;i<ans.size();i++){
           if(ans[i]!= INT_MIN)
            cout<<ans[i]<<" ";
        } 
}