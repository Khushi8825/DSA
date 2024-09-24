#include<iostream>
using namespace std;
float convert(float C){
   float F=(C*9/5)+32;
    return F;
}
int main(){
float c;
cout<<"Enter temperature in celsius:"<<endl;
cin>>c;
float T;
cout<<"Temperature in Fahrenheit:"<<endl;
T= convert(c);
cout<<T;
}