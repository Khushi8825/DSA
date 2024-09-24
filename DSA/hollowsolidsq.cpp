#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row =0;row<n;row++){
        if(row==0 or row==n-1){
          for(int col=0;col<n;col++){
            cout<<"* ";
          }
        }
        else{
            for(int col=0;col<n;col++){
                if(col==0 or col==n-1) cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}