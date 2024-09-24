#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        
        int col;
        for(int col = 0;col<row+1;col++){
            int a=col+1;
            char ch=a +'A'-1;
            cout<<ch;
            
        }

        for(int col=row;col>=1;col--){
            int a=col;
            char ch=a+'A'-1;
            cout<<ch;
            
        }
        cout<<endl;
    }
}