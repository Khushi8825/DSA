#include<iostream>
#include<vector>

using namespace std;
vector<int> HelperFunction(vector<int> arr,int n){
   // vector<int> ans;
    vector<int> res;
    // for(auto i:arr){
    //     ans.push_back(i);
    // }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]);
                count++;
        }
        res.push_back(count);
    }
    return res;

}
int main(){
    int n;
    cout<<"Enter the size of arr:";
    cin>>n;
    vector<int> arr(n);
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // arr.push_back(arr[i]);
    }
    vector<int> ans = HelperFunction(arr,n);
    for(auto i: ans){
        cout<<i<<" ";
    }
    
}