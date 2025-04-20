#include<iostream>
#include<vector>
#include<string>
using namespace std;
string reverse(string& s,int i,string& ans){
    if(i<0) return ans;

    ans += s[i];

    reverse(s,i-1,ans);

    //return ans;
}
int main(){
    string s="abcdef";
    string ans="";
    reverse(s,s.size()-1,ans);
    cout<<ans;
}