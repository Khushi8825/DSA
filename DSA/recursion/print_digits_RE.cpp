#include<iostream>
using namespace std;
//tail recusrion
//RECURSIVE call after processing
void printdigits(int n){
    if(n==0) return;

    cout<<n%10<<" ";

    printdigits(n/10);
}

//Head recursion
//RECURSIVE call before processing 
void printdigits2(int n){
    //base case
    if(n==0) return;
    //recursive relation(baki recursion sambhal lega)
    printdigits2(n/10);
    //processing(1 case hum solve krenge)
    int digits=n%10;
    cout<<digits<<" ";
    
}


int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    printdigits(n);
    cout<<endl;
    printdigits2(n);
}