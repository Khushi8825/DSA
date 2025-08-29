#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void count(string s,unordered_map<char, int>& m){
    int n = s.size();
    for(int i =0; i<n; i++){
        m[s[i]]++;
    }
}
int main(){
    string st = "thiruvananthapuram";
    unordered_map<char,int> map;
    count(st,map);
    for(auto i: map){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}