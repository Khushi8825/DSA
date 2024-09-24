#include<iostream>
using namespace std;
int factorial(int n){
    int a=1;
    for(int i=1;i<=n;i++){
       a=a*i;
    }
    return a;
}


int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int fact=factorial(n);
    cout<<"factorial is:"<<fact<<endl;
    return 0;

}