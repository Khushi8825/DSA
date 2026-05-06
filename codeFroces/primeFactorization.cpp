#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    int count = 0;
    for(int i = 1; i<=x; i++){
        if(x%i == 0){
            count++;
        }
    }
    if(count == 2) return true;
    else return false;
}
int helper(vector<int>& arr, int a){
    vector<pair<int,int>> fact;
    int n = a;
    for(int i = 2; i<a; i++){
        if(isPrime(i)){
            int count  = 0;
            while(n % i == 0){
                count++;
                n = n/i;
            }
            fact.push_back({i, count});
        }
        if(n == 1) break;
    }
    int sum = 0;
    for(int i = 0; i<fact.size(); i++){
        int a = fact[i].first;
        int p = fact[i].second;

        sum += (p * arr[a]);
    }
    return sum;
}
int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int a;
    cin >> a;
    int ans =  helper(arr, a);
    cout<<ans;
    return 0;
}
