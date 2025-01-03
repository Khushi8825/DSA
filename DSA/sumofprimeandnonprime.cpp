#include<iostream>
#include<vector>
using namespace std;
int absdifference(int n){
    int count=0;
    int sum_prime=0,sum_nonprime=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            if(count==2){
            sum_prime+=n;
        }
        else{
            sum_nonprime+=n;
        }
        }
        
    }
    if(sum_prime>sum_nonprime){
        return sum_prime-sum_nonprime;
    }
    else{
        return sum_nonprime-sum_prime;
    }
}
int main(){
    int start;
    //enter the starting of range
    cout<<"enter the starting of range";
    cin>>start;
    int end;
    //enter the end of range
    cout<<"enter the end of range";
    cin>>end;
    int n;
    for(int i=start;i<=end;i++){
        n = absdifference(i);
        
    }
    cout<<n;
    
}