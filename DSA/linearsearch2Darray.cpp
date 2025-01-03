#include<iostream>
using namespace std;
bool linearsearch(int arr[100][100],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
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
    int key;
    cout<<"Enter key to be searched:"<<endl;
    cin>>key;
    cout<<linearsearch(arr,row,col,key); 
}