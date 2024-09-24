#include<iostream>
using namespace std;
void check(int n)
{
    int count=1;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) count++;
    }
    if(count==2) cout<<"prime number";
    else cout<<"composite number";
}
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    check(n);
}