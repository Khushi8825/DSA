#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //full pyramid
     for(int row=0;row<n;row++){
      //space
        for(int col =0;col<n-row-1;col++){
           cout<<" ";
        }
        for(int col=0;col<row+1;col++){
         cout<<"* ";
        }
        cout<<endl;

     }
     //inverted full pyramide
     for(int row=0;row<n;row++){
      //space
        for(int col =0;col<row;col++){
           cout<<" ";
        }
        for(int col=0;col<n-row;col++){
         cout<<"* ";
        }
        cout<<endl;

     }

}