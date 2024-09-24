#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter the number of rows and columns";
    cin >> n >> m;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout << "* ";

        }
        cout << endl;
    }

}