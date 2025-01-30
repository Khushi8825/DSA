#include<iostream>
#include<vector>
#include<string>
using namespace std;
    int firstUniqChar(string s) {
        int i=0;
        int isunique=-1;
        // for(int i=0;i<s.length();i++){
            while(i<s.length()){
            for(int j=0; j<s.length();j++){
                if(i==j){
                    continue;
                }
                if(s[i]==s[j]){
                    i++;
                }
               isunique=i;
            }
            
        }
        cout << isunique;
    }
int main(){
  string s = "leetcode";
  cin >> s;
  firstUniqChar(s);
  cout << firstUniqChar(s);
}