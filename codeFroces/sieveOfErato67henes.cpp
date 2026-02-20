#include<iostream>
#include<vector>
using namespace std;
bool sieveErato(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]*arr[j] == 67){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t ;
    cin>>t;
    for(int j =0; j<t; j++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        bool ans = sieveErato(arr);
        if(ans){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}