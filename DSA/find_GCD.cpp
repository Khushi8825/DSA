#include<iostream>
#include<vector>
using namespace std;
int ans(int n,int m){
    if(n==0) return m;
    if(m==0) return n;
    while(n>0 && m>0){
        if(n>m){
            n=n-m;
        } 
        else{
            m=m-n;
        }
    }
    if(n==0) return m;
    else return n;
}
int main(){
int n,m;    
cout<<"Enter the two numbers: ";
cin>>n>>m;
int gcd=ans(n,m);
cout<<gcd;

}