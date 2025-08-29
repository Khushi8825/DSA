//Next permutation  : -  Kisi number ya array ke elements ka next lexicographically greater arrangement banana.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> next_permutation(vector<int>& arr1){
    vector<int> arr = arr1;
    int idx = -1;
    for(int i = arr.size()-1; i>=0; i--){
        if(i+1<arr.size() && arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(arr.begin(),arr.end());
    }
    else{
        int nextIdx = -1;
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i]>arr[idx]){
                nextIdx = i;
                break;
            }
        }
        swap(arr[idx],arr[nextIdx]);
        reverse(arr.begin()+idx+1,arr.end());
    }
    return arr;
}
int main(){
    cout<<"Enter the length of array"<<" ";
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    vector<int> nextPermutation = next_permutation(arr);
    for(auto i : nextPermutation){
        cout<<i<<" ";
    }
    return 0;
}