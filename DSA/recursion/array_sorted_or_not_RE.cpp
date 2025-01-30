#include<iostream>
#include<vector>
using namespace std;
bool checksorted(vector<int> &arr,int i){
    int n=arr.size();

    if(i==n-1 ) return true;

    if(arr[i+1]<arr[i]){
        return false;
    }

    return checksorted(arr,i+1);

}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    
    for(auto i: arr){
        cin>>i;
    }
    int i=0;
    bool ans=checksorted(arr,i);
    cout<<ans<<endl;
    cout<<true;
}