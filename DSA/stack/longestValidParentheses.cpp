#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stack<int> s;
    int maxlen=0;
    s.push(-1);
    //wrong approach this code will count total no.of valid parentheses.
    //int count=0;
    // for(int i=0;i<str.size();i++){
    //     if(str[i]=='('){
    //         s.push(str[i]);
    //     }
    //     if(str[i]==')' && !s.empty() && s.top()=='('){
    //         s.pop();
    //         count++;
    //         count++;
    //     }
    // }
    // cout<<count;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            s.push(i);
        }
        else{
            s.pop();
            if(s.empty()){
                s.push(i);
            }
            else{
                int len= i-s.top();
                maxlen=max(len,maxlen);
            }
        }
    }
    cout<<maxlen;

}