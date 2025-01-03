#include<iostream>
using namespace std;
int divide(int divident, int divisor)
{
    int start=0;
    int end=abs(divident);
    int mid= start+(end-start)/2;
    int ans = 0;
    while(start<=end){
        if(abs(divisor*mid) == abs(divident)){
             ans = mid;
             break;
        }
        if(abs(divisor*mid) < abs(divident)){
            ans = mid; 
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    if((divisor<=0 && divident<=0) || (divisor>0 && divident>0))
      return ans;
    else 
      return -ans;
}
int main(){
    int divident;
    cout<<"Enter the divident:";
    cin>>divident;
    int divisor;
    cout<<"Enter the divisor:";
    cin>>divisor;
    int quotient = divide(divident,divisor);
    cout<<"quotient is:";
    cout<<quotient<<endl;

    int precision;
    cout<<"enter the number of floating digits in precision";
    cin>>precision;

    double step=0.1;
    double finalans=abs(quotient);   

    for(int i=0;i<precision;i++){

        for(double j=finalans ; j*abs(divisor)<=abs(divident) ; j = j + step){
            finalans=j;
        }
        step=step/10;
    }
    
    if((divisor<=0 && divident<=0) || (divisor>0 && divident>0))
      cout<<"final ans is."<< finalans << endl;
    else 
      cout<<"final ans is."<< -finalans << endl;
    return 0;
}