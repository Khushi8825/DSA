#include<iostream>
#include<cstring>
using namespace std;
int getlength(char name[]){
    int length=0;
    
    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    return length;
}
int main(){
    char ch[100];
    cin.getline(ch,50);
    int length=getlength(ch);
    cout<<length; 
}