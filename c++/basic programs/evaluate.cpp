#include<iostream>
using namespace std;
int main(){
    float a=7/22*(3.14+2)*3/5;
    cout<<a;//isme 7/22 dono int me hai isliyedono ka divide v int hoga joki 0 hoga
    float x=4+2%-8;
    cout<<endl<<x;
    //steps solving first equation
    // 3.14+2=5.14
    // 7/22*5.14*3/5
    // precedence same hai isliye left to 
    // right chalenge
    // 7/22=0(dono int me hai isliye divide bhi int me)
    // now 
    // 0*5.14*3/5
    // 0*5.14=0
    // 0*3/5=0
    float d=2/7;
    cout<<endl<<d;
}
