#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>0&&b>0) cout<<"lies in first quadrant";
    else if(a<0&&b>0) cout<<"lies in 2nd quadrant";
    else if(a<0&&b<0) cout<<"lies in 3rd quadrant";
    else if(a>0&&b<0) cout<<"lies in 4th quadrant";
    else if( (a>0||a<0) && b==0) cout<<"lies on x-axis";
    else if((a==0)&&(b>0||b<0)) cout<<"lies on y-axis";
    else cout<<"origin";
    }