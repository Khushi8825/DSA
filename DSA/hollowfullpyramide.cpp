#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter a number:";
  cin>>n;
  for(int row=0;row<n;row++){
     for(int col=0;col<n-row-1;col++){
      cout<<" ";
     }
     
  
    for(int col=1;col<=row*2+1;col++){
      if(row==0||row==n-1) cout<<"*";
      else{
         if(col==1||col==row*2+1) cout<<"*";
         else cout<<" ";
      }
    }
    cout<<endl;
  }
} 
