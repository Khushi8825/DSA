// You are given an array of positive integers arr. You'd like to know how many triangles can be
// formed with side lengths equal to adjacent elements from arr.
// Construct an array of integers of length arr.length - 2, where the ith element is equal to 1 
// if it's possible to form a triangle with side lengths arr[i], arr[i + 1], and arr[i + 2], otherwise 0.

// Return the resulting array of integers.
// Note: A triangle can be formed with side lengths a, b, and c if a + b > c, a + c > b, and b + c > a.

// Example
// For arr = [1, 2, 2, 4], the output should be solution(arr) = [1, 0].
// output[0] = 1 because we can form a triangle with side lengths 1, 2, and 2.
// output[1] = 0 because 2 + 2 ≤ 4, so we can't form a triangle with side lengths 2, 2, and 4.

// For arr = [2, 10, 2, 10, 2], the output should be solution(arr) = [0, 1, 0].
// output[0] = 0 because 2 + 2 ≤ 10, so we can't form a triangle with side lengths 2, 2, and 10.
// output[1] = 1 because we can form a triangle with side lengths 2, 10, and 10.
// output[2] = 0 because 2 + 2 ≤ 10, so we can't form a triangle with side lengths 2, 2, and 10.

// For arr = [1000000000, 1000000000, 1000000000, 1000000000], the output should be solution(arr) = [1, 1].

// All array elements are the same, so any three elements will form an equilateral triangle. 
// Therefore, all elements of the resulting array should be equal to 1.

// Input/Output
// [execution time limit] 0.5 seconds (cpp)
// [input] array.integer arr
// An array of positive integers.
// Guaranteed constraints:
// 3 ≤ arr.length ≤ 1000,
// 1 ≤ arr[i] ≤ 109.
// [output] array.integer
// Return an array of 0s and 1s where the ith element represents whether a triangle can be formed with side lengths 
// arr[i], arr[i + 1], and arr[i + 2].

#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c){
    if(a+b > c && b+c > a && c+a > b){
        return true;
    }
    else{
        return false;
    }
}
vector<int> helper(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n-2, 0);
    if(n<3) return ans;
    for(int i = 0; i<n-2; i++){
        if(check(arr[i], arr[i+1], arr[i+2])){
            ans[i] = 1;
        }
        else{
            ans[i] = 0;
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