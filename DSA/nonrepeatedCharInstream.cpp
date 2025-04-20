//first non repeated char in stream ye question kux or bolta hai or iska output v kux or hi aata hai toh 
//iska solution ye nhi hoga ye kisi dusre ans question ka ans ho sakhta hai
#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    string s="geeksforgeeks";
    unordered_map<char,int> mp;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        mp[ch] = 0;
    }
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(char ch='a';ch<='z';ch++){
        if(mp[ch]==1){
            cout<<ch;
            break;
        }
    }
}