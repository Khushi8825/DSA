#include<iostream>
#include<climits>
using namespace std;
void findmaximum(int arr[100][100],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
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
    findmaximum(arr,row,col); 
}