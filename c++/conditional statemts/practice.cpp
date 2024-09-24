#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if((a%5==0||a%3==0)&&a%15!=0)
    cout<<"number is divisible by 5 or 3 but not by 15";
    else cout<<"number is divisible";
}