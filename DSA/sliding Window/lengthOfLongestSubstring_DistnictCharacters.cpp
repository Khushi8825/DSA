#include<bits/stdc++.h>
using namespace std;
int FindLength(string &str){
    unordered_set<char> charset;
    int right=0;
    int left=0;
    int maxLen=0;
    while(right < str.length()){
        if(charset.find(str[right])==charset.end()){
            charset.insert(str[right]);
            if((right-left+1)>maxLen){
                maxLen=right-left+1;
            }
            right++;
        }
        else{
            charset.erase(str[left]);
            left++;
        }
    }
    return maxLen;
}
int main(){
    string str= "aabbabcccd";
    int len=FindLength(str);
    cout<<len;
}