#include<bits/stdc++.h>
using namespace std;
int helper(int a, int b, int c, int d){
    int count  = 0;
    while(a != c && b != d){
        if(a<b){
            a += 1;
            count++;
        }
        else if(b<a){
            b += 1;
            count++;
        }
        else{
            a += 1;
            b += 1;
            count++;
        }
    }
    while(a != c){
        a += 1;
        count++;
    }
    while(b != d){
        b += 1;
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = helper(a, b, c, d);
        cout<<ans<<endl;
    }
    return 0;
}