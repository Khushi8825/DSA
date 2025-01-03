#include<iostream>
#include<cstring>
using namespace std;
void reversearray(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    for(i=0;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    cout<<arr;
}
int main(){
    char name[100];
    cin>>name;
    reversearray(name);
}