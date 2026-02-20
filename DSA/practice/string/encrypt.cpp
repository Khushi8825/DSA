#include<bits/stdc++.h>
using namespace std;
string encrypt(string& s, int key){
    int n = s.size();
    string ans = "";
    for(char i : s){
        if(isalpha(i)){
            char base = isupper(i)? 'A':'a';
            char y = ((i - base + key)%26)+ base;
            ans += y;
        }
        else if(isdigit(i)){
            char y = ((i - '0' + key)%10) + '0';
            ans += y;
        }
        else{
            ans += i;
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;

    int key;
    cin >> key;

    string ans = encrypt(s, key);
    cout << ans;
    return 0;
}