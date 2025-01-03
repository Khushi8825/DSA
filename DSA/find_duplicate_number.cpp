#include<iostream>
#include<vector>
using namespace std;
// int duplicate(vector<int>& arr){
//     for(int i=0;i<=arr.size();i++){
//          for(int j=i+1;j<=arr.size();j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//                 break;
//             }
//          } 
//     }
// }

int duplicate(vector<int>& arr){
while(arr[0] != arr[arr[0]]){
    swap(arr[0],arr[arr[0]]);
}
return arr[0];
}
int main(){
    vector<int> arr{1,3,4,2,2};
    int ans=duplicate(arr);
    cout<<"Duplicate element is:"<<ans;
}