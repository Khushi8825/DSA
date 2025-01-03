#include<iostream>
using namespace std;
void printcolWiseSum(int arr[100][100],int row,int col){
    for(int j=0;j<col;j++){
        int sum=0;
      for(int i=0;i<row;i++){
           sum=sum + arr[i][j];
        }
        cout<<sum<<endl;

    }
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
    printcolWiseSum(arr,row,col); 
}