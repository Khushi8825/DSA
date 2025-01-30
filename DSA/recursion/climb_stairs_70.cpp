#include<iostream>
#include<vector>
#include<string>
using namespace std;
int climb_stairs(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return climb_stairs(n-1)+climb_stairs(n-2);
}
int main(){
    int s;
    cout<<"Enter the no of stairs you want to reach:";
    cin>>s;
    int ans=climb_stairs(s);
    cout<< ans;
}