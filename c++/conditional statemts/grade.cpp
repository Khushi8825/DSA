#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // if(a>=81 and a<=100) cout<<"very good";
    // else if(a>=61 and a<=81) cout<<"good";
    // else if(a>=41 and a<=61) cout<<"average";
    // else cout<<"fail";


    if(a>=81 and a<=100) cout<<"very good";
    else if(a>=61) cout<<"good";
    else if(a>=41) cout<<"average";
    else cout<<"fail";
}