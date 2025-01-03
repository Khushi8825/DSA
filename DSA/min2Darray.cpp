#include<iostream>
#include<limits.h>
using namespace std;
void findminimum(int arr[100][100],int row,int col){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    cout<<min;
}
int main(){
    
    int arr[100][100];
    int row,col;
    cin>>row;
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D Array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    findminimum(arr,row,col); 
}