#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter the numbers :";
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c) cout<<"a is smallest"<<a;
        else cout<<"c is smallest"<<c;
    }
    else
    {
         if(b<c) cout<<"b is smallest"<<b;
         else cout<<"c is smallest"<<c;
    }
    // if(a<b&&a<c) cout<<"a is smallest";
    // else if(b<a&&b<c) cout<<"b is smallest";
    // else cout<<"c is smallest";
}