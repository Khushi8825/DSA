#include<iostream>
using namespace std;
int sum(int a,int b);//function declaration
//ab isko kanhi v define kr sakhte hai main ke upr v ya niche v 

int main(){
    int num1,num2;
    cout<<"Enter the numbers:";
    cin>>num1>>num2;
   int add = sum(num1,num2);
   cout<<"Addition is:";
   cout<< add;
   return 0;
}
int sum(int a,int b){
    int c= a+b;
    return c; 
}