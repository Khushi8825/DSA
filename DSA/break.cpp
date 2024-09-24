#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"Khushi";
        break;
    }
    cout<<" Singh"<<endl<<endl;
      for(int i=0;i< n;i++){
        if(i==2) continue;//is point pe hum chor denge aage execute krenge or next condition check krenge
        cout<<"Khushi"<<endl;
        
    }
}