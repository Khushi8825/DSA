// #include<bits/stdc++.h>
// using namespace std;
// int FindLength(string &str){
//     unordered_set<char> charset;
//     int right=0;
//     int left=0;
//     int maxLen=0;
//     while(right < str.length()){
//         if(charset.find(str[right])==charset.end()){
//             charset.insert(str[right]);
//             if((right-left+1)>maxLen){
//                 maxLen=right-left+1;
//             }
//             right++;
//         }
//         else{
//             charset.erase(str[left]);
//             left++;
//         }
//     }
//     return maxLen;
// }
// int main(){
//     string str= "aabbabcccd";
//     int len=FindLength(str);
//     cout<<len;
// }

#include<iostream>
#include<limits>
using namespace std;
int findMax(int arr[], int n, int k){
    int l = 0;
    int r = k-1;
    int sum = 0;
    for(int i = 0; i<=r; i++){
        sum += arr[i];
    }

}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int ans = findMax(arr,n, k);
    cout << ans;
    return 0;
}