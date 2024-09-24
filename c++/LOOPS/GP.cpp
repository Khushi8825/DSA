#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"terms upto which AP is required:"<<endl;
    cin>>n;
    int a;
    cout<<"firts term of gp:";
    cin>>a;
    int d;
    cout<<"common multiple: ";
    cin>>d;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a =a*d;
    }
 }