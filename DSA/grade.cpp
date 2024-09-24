#include<iostream>
using namespace std;
char getgrade(char a){
    if(a<=100&&a>90) return 'A';
    else if(a>80) return 'B';
    else if(a>70) return 'C';
    else if(a>60) return 'D';
    else cout<<"Need improvemet"; return 0;
}

int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    char grade = getgrade(marks);
    cout<<grade;
    return 0;
}