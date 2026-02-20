#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    string chars = "ABC";
    vector<int> fixedPos;
    string line;
    getline(cin, line);
    getline(cin, line);
    stringstream ss(line);
    int x;
    while(ss >> x) fixedPos.push_back(x - 1);

    map<char,int> cnt;
    for(char c: s) cnt[c]++;

    vector<string> perms = {"ABC","ACB","BAC","BCA","CAB","CBA"};
    int ans = 1e9;

    for(string p: perms) {
        string t(n,' ');
        int idx = 0;
        for(char c: p) {
            for(int k = 0; k < cnt[c]; k++) t[idx++] = c;
        }

        bool ok = true;
        for(int pos: fixedPos) if(t[pos] != s[pos]) ok = false;
        if(!ok) continue;

        vector<int> order;
        vector<int> ptr(256,0);
        vector<vector<int>> posStart(256);
        idx = 0;
        for(char c: p) {
            for(int k = 0; k < cnt[c]; k++) posStart[c].push_back(idx++);
        }
        for(char c: s) order.push_back(posStart[c][ptr[c]++]);

        vector<int> lis;
        for(int v: order){
            auto it = lower_bound(lis.begin(), lis.end(), v);
            if(it == lis.end()) lis.push_back(v);
            else *it = v;
        }
        ans = min(ans, n - (int)lis.size());
    }

    if(ans == 1e9) cout << "Impossible";
    else cout << ans;
    return 0;
}
