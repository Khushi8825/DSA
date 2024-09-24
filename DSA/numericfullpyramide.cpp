#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int row=0;row<n;row++){
    for(int col=0;col<n-row-1;col++){
    cout<<"  ";
    }
    int a=0;
    for(int col=0;col<row+1;col++){
            
            cout<<row+col+1<<" ";
        }
         int b=2*row;
        for(int col=0;col<row;col++){
            cout<<b<<" ";
            b=b-1;

        }
        cout<<endl;

   }
}