// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int helper(vector<int> arr, int size, int &ans){
    
//     if(size==0){
//         return ans;
//     }
//     for(int i=size;i>=0;i--){
//         helper(arr,size-1,ans);
//         ans=ans+arr[i];
//     }
//     return ans;
// }
// int subarraySum(vector<int> arr){
//     cout<<"I'm in function ."<<endl;
//     int n=arr.size();
//     int ans=0;
//     //ans=helper(arr,n,ans);
//     for(int i=0;i<n;i++){
//         ans += arr[i] * (i + 1) * (n - i);
//     }
    
//     return ans;
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     vector<int> arr;
//     int size;
//     cout<<"Enter the size of array: ";
//     cin>>size;
//     cout<<endl;
//     for(int i=0;i<size;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
    
//     int ans=subarraySum(arr);
//     cout<<ans<<endl;
//     return 0;
// }
