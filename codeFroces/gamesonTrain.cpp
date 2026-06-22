#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }

        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        cout<<maxi-mini+1<<endl;
    }
    return 0;
}