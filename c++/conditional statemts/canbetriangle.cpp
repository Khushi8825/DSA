#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"sides of triangle are:";
    cin>>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(c+a)>b) cout<<"valid traingle";
    else cout<<"not a valid triangle";
}