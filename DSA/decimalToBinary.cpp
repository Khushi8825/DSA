#include<iostream>
#include<vector>
using namespace std;
int convert2binary(int n){
    int ans  = 0;
    int i = 1;
    while(n!=0){
        int rem = n%2;
        ans = ans + rem*i;
        n = n/2;
        i*=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a = convert2binary(n);
    cout<<a;
}
