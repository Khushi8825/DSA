#include<iostream>
#include<vector>
using namespace std;
int findsqrt(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
    if(mid*mid>n){
        end=mid-1;
    }
    else if(mid*mid<n){
         ans=mid;
         start=mid+1;
    }
    else return mid;
    mid=start+(end-start)/2;

    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;

    int ans=findsqrt(n);
    

    int precision;
    cout<<"enter the number of floating digits in precision";
    cin>>precision;

    double step=0.1;
    double finalans=ans;   

    for(int i=0;i<precision;i++){

        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"final ans is."<< finalans << endl;

    return 0;
    }