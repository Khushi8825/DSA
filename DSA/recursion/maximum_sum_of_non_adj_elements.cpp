#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>& arr,int sum,int i,int& maxi){
    if(i>=arr.size()){ 
        maxi=max(maxi,sum);
        return maxi;
    }

    //include
    solve(arr,sum+arr[i],i+2,maxi);

    //exclude
    solve(arr,sum,i+1,maxi);

   
}
int main(){
    vector<int> arr={2,1,4,9};
    int sum=0;
    int i=0;
    int maxi=INT_MIN;
    solve(arr,sum,i,maxi);
    cout<<maxi;
}