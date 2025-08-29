#include<iostream>
#include<vector>
using namespace std;
int binary2decimal(string str){
    int len = str.length();
    int p2 = 1;
    int sum = 0;
    for(int i = len-1; i>=0 ; i--){
        if(str[i]=='1'){
            sum = sum + p2;
        }
        p2 *= 2;
    }
    return sum;
}
int main(){
    string s;
    cin>>s;
    int ans = binary2decimal(s);
    cout<<ans;
}