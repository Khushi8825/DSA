#include<iostream>
#include<string>
#include<vector>
//row 0: A   E       I
//roe 1: B D   F   H   J              o/p= "AEIBDFHJCG"
//row 2: C       G
using namespace std;
string convert(string s,int NumRows){
    if(NumRows==1) return s;
    vector<string> zigzag(NumRows);

    int i=0;
    while(i<s.size()){
        int row=0;
        while(i<NumRows && i<s.size()){
            zigzag[row++].push_back(s[i++]);
        }
        row=NumRows-2;//row=3 after loop  we need our row to be at 1
        while(row>=0 && i<s.size()){
            zigzag[row--].push_back(s[i++]);
        }
        row=1;
        while(row<NumRows && i<s.size()){
            zigzag[row++].push_back(s[i++]);
        }
    }
    string ans="";
    for( auto str:zigzag){
        ans += str;
    }
    return ans;
}
int main(){
    string s="ABCDEFGHIJ";
    int n=2;
    string a=convert(s,n);
    cout<<a;
}