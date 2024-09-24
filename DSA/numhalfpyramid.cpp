#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<col<<" " ;
    //     }
    //     cout<<endl;
    // }
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<j+1<<" ";

    }
    cout<<endl;
}

}