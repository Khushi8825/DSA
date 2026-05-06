/* in this we will take a string in input which contain space separated characters 0 to 9 or +, _, *, / */
/* we will use stringstream to extarct each character and perform reverse polish notation
in which 2 3 4 + * -> 2 * (3 + 4) -> 14  use stack for this */
#include<bits/stdc++.h>
using namespace std;
int helper(vector<string>& arr){
    stack<int> st;
    for(int i = 0; i< arr.size(); i++){
        char c = arr[i][0];
        if(c == '+' || c == '-' || c == '*' || c == '/'){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int s  = 0;
            if(c == '+'){
                s = a+b;
            }
            else if(c == '-'){
                s = max(a,b)-min(a,b);
            }
            else if(c == '*'){
                s = a*b;
            }
            else{
                s = a/b;
            }
            st.push(s);
        }
        else if(isdigit(c)){
            st.push(c-'0');
        }
    }
    return st.top();
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string c;
    vector<string> arr;
    while(ss>>c){
        arr.push_back(c);
    }
    cout<<helper(arr);
    return 0;
}