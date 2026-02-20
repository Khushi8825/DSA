#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // dp[x] = min cost ending with face x
        vector<int> dp(7, INF), newdp(7, INF);

        // Initialize first position
        for(int x = 1; x <= 6; x++){
            dp[x] = (a[0] == x ? 0 : 1);
        }

        for(int i = 1; i < n; i++){
            for(int x = 1; x <= 6; x++){
                newdp[x] = INF;
            }

            for(int x = 1; x <= 6; x++){          // current face
                for(int y = 1; y <= 6; y++){      // previous face

                    if(x == y) continue;
                    if(x + y == 7) continue;

                    int cost = dp[y] + (a[i] == x ? 0 : 1);
                    newdp[x] = min(newdp[x], cost);
                }
            }

            dp = newdp;
        }

        int ans = INF;
        for(int x = 1; x <= 6; x++){
            ans = min(ans, dp[x]);
        }

        cout << ans << "\n";
    }

    return 0;
}
