#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
#include<cctype>

using namespace std;

int maxProfit(vector<int>& arr){
    //TC = O(n^2)
    // int maxi = INT_MIN;
    // for(int i = 0; i<arr.size(); i++){
    //     for(int j = i+1; j< arr.size(); j++){
    //         if((arr[j] - arr[i]) > maxi ){
    //             maxi = arr[j] - arr[i];
    //         }
    //     }
    // }
    // return maxi;

    //TC = O(n);
    //SC = O(1);
    int mini = arr[0];
    int profitMax = 0;
    int n = arr.size();
    for (int i = 0; i<n; i++){
        int cost = arr[i] - mini;
        profitMax = max(profitMax, cost);
        mini = min(mini, arr[i]);
    }
    return profitMax;
}
int main(){
    //this method is correct but not ideal for test environment
    // vector<int> arr;
    // int x;
    // while(cin >> x) arr.push_back(x);

    //this input method is ideal for exams and tests;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int profit = maxProfit(arr);
    cout << profit;
    return 0;
}