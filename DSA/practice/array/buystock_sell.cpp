#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<limits.h>
using namespace std;

//wrong approach because  hum simply difference calculate kr re hai largets or smallest price ke bich 
// but we have to first buy product and the sell it and calculate maximum profit;
// int maxProfit(vector<int>& prices) {
//     int minprice=INT_MAX;
//     int idx;
//     for(int i=0;i<prices.size();i++){
//         if(prices[i]<minprice){
//             minprice=prices[i];
//             idx=i;
//         }
//     }
//     int diff=0;
//     for(int i=0;i<prices.size();i++){
//         if(idx==i) continue;
//         diff=max(diff,prices[i]-minprice);
//     }
//     return diff;
// }
void maxprofithelper(vector<int>& arr,int i,int &minprice,int &profitMax){
    if(i==arr.size()) return;

    if(arr[i]<minprice){
        minprice=arr[i];
    }
    int todaysprofit=arr[i]-minprice;
    if(todaysprofit>profitMax){
        profitMax=todaysprofit;
    }

    maxprofithelper(arr,i+1,minprice,profitMax);
}
int maxprofit(vector<int>& arr){
    int minprice = INT_MAX;
    int maxProfit=0;
    int i=0;
    int todaysprofit;
    while(i<arr.size()){
        if(arr[i]<minprice){
            minprice=arr[i];
        }
        todaysprofit=arr[i]-minprice;
        if(todaysprofit>maxProfit){
            maxProfit=todaysprofit;
        }
        i++;
    }
    // maxprofithelper(arr,i,minprice,profitMax);
    return maxProfit;
}
int main(){
    vector<int> arr;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int profit = maxprofit(arr);
    cout<<profit<<endl;
}

