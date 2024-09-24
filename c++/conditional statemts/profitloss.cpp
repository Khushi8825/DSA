#include<iostream>
using namespace std;
int main(){
    int sp;
    int cp;
    cin>>sp;
    cin>>cp;
    if(sp>cp) cout<<"profit of:"<<sp-cp;
    else if (cp>sp) cout<<"loss of :"<<cp-sp;
    else cout<<"no profit no loss";
}