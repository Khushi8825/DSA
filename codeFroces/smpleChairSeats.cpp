// #include<bits/stdc++.h>
// using namespace std;
// int helper(vector<int>& arr, vector<int>& mark, int idx ,int count){
//     if(idx == arr.size()) return count;
//     if(mark[idx+1]==1) return count;

//     int not_seat = helper(arr, mark, idx+1, count);

//     mark[arr[idx]] = 1;
//     int seat = helper(arr, mark, idx+1, count+1);
//     mark[arr[idx]] = 0;
//     return max(seat, not_seat);
// }
// int maximumSeats(vector<int>& arr){
//     vector<int> mark(arr.size()+1, 0);
//     return helper(arr, mark, 0, 0);
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for(int i = 0; i<n; i++){
//             cin>>arr[i];
//         }
//         int ans = maximumSeats(arr);
//         cout<<ans<<endl;

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;

//         vector<int> p(n+1);
//         for(int i = 1; i <= n; i++){
//             cin >> p[i];
//         }

//         vector<bool> vis(n+1, false);
//         int cycles = 0;

//         for(int i = 1; i <= n; i++){
//             if(!vis[i]){
//                 cycles++;
//                 int j = i;
//                 while(!vis[j]){
//                     vis[j] = true;
//                     j = p[j];
//                 }
//             }
//         }

//         cout << n - cycles << endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;

int maximumSeats(vector<int>& p){
    int n = p.size();
    vector<int> vis(n, 0);
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            int cnt = 0;
            int j = i;

            // traverse cycle
            while(!vis[j]){
                vis[j] = 1;
                j = p[j] - 1; // convert to 0-based
                cnt++;
            }

            // add (cycle_size - 1)
            ans += (cnt - 1);
        }
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        cout << maximumSeats(p) << "\n";
    }
    return 0;
}