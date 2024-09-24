#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a=0;
        for(int j=n-1;j>=i;j--){
            
            a=a+1;
            cout<<a<<" ";
        }
        cout<<endl;
    }
}