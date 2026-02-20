// Find longest substring present at both front and rear without overlapping
// input : aabcdaabc  output : 4 i.e aabc
#include<bits/stdc++.h>
using namespace std;
int substring(string& s){
    int n = s.size();
        for(int len = n/2; len >= 1; len--) {
        string pre = s.substr(0, len);
        string suf = s.substr(n - len, len);
        if(pre == suf)
            return len;
    }
    return 0;
        //     If interviewer wants optimized solution → use KMP (LPS array):
        // Build LPS:
        // a a b c d a a b c
        // 0 1 0 0 0 1 2 3 4
        // Last value = 4 → means prefix of length 4 is repeated at the end.
}
int main(){
    string s;
    cin>>s;
    int ans = substring(s);
    cout<<ans;
    return 0;
}