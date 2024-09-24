#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter the numbers :";
    cin>>a>>b>>c;
    // if(a>b)
    // {
    //     if(a>c) cout<<"a is greatest"<<a;
    //     else cout<<"c is greatest"<<c;
    // }
    // else
    // {
    //      if(b>c) cout<<"b is greatest"<<b;
    //      else cout<<"c is greatest"<<c;
    // }
    if(a>b&&a>c) cout<<"a is greatest";
    else if(b>a&&b>c) cout<<"b is greatest";
    else cout<<"c is greatest";

}