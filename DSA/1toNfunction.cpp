#include<iostream>
using namespace std;
void count(int n);
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<endl;
    count(n);
}
void count(int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
}