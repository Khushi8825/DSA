#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<char> s = {'h','e','l','l','o'};
    stack<char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}