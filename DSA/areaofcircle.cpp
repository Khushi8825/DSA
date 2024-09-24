#include<iostream>
using namespace std;
float circlearea(int r){
    float pi=3.14;
    return pi*r*r;
}
int main(){
    int a;
    cout<<"enter the radius of circle:"<<endl;
    cin>>a;
    float area=circlearea(a);
    cout<<"area of circle is:"<<area<<endl;
}