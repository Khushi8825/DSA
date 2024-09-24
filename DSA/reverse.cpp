#include<iostream>
using namespace std;
int count(int n){
    int c=0;
    for(int i=0;n!=0;i++){
        
        n=n/10;
        c=c+1;
    }
    cout<<"number if digits of integer:";
    return c;
}
void reverse(int a,int n){
    int r,reverse=0;
    for(int i=0;i<a;i++){
       r=n%10;
       reverse = reverse*10 + r;
       n=n/10;
    }  
    cout<<"reverse is:"<<reverse;

}
int main(){
    int n;
    cout<<"input a number:";
    cin>>n;
    int c= count(n);
    cout<<c<<endl;
    reverse(c,n);
}