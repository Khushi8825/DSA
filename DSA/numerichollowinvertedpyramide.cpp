#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int row=0;row<n;row++){ 
        if(row==0||row==n-1){
        for(int col=0;col<n-row;col++){
            cout<<col+1;
        }
        }
        else {
            for(int col=0;col<n-row;col++){
                if(col==0||col==n-row-1) cout<<col+1;
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}