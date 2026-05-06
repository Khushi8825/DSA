// Given an array of integers a, your task is to calculate the digits that occur the most number of times in the array. 
// Return the array of these digits in ascending order.
// Example
// For a = [25, 2, 3, 57, 38, 41], the output should be solution(a) = [2, 3, 5].
// Here are the number of times each digit appears in the array:
// 0 -> 0
// 1 -> 1
// 2 -> 2
// 3 -> 2
// 4 -> 1
// 5 -> 2
// 6 -> 0
// 7 -> 1
// 8 -> 1

// The most number of times any number occurs in the array is 2, and the digits which appear 2 times are 2, 3 and 5. So the answer is [2, 3, 5].

// Input/Output
// [execution time limit] 0.5 seconds (cpp)
// [input] array.integer a
// An array of positive integers.

// Guaranteed constraints:
// 1 ≤ a.length ≤ 103,
// 1 ≤ a[i] < 100.

// [output] array.integer

#include<bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int>& arr){
    int n = arr.size();
    vector<int> freq(10, 0);
    for(int i = 0; i<n; i++){
        int a = arr[i];
        if(a == 0){
            freq[0]++;
        }
        while(a!=0){
            int rem = a%10;
            freq[rem]++;
            a /= 10;
        }
    }
    int maxi = INT_MIN;
    for(int i = 0; i<10; i++){
        maxi = max(maxi, freq[i]);
    }
    vector<int> ans;
    
        for(int i = 0; i<10; i++){
            if(freq[i] == maxi){
                ans.push_back(i);
            }
        }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = helper(arr);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}