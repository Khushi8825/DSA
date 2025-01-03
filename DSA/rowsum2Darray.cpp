#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printrowWiseSum(int arr[100][100],int row,int col){
    //row sum -> row-wise traversal
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
          sum=sum+arr[i][j];
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
    cout<<"2D Array";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printrowWiseSum(arr,row,col);

}