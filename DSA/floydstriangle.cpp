#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            a=a+1;
            cout<<a<<" ";
        }
        
        cout<<endl;
    }
}