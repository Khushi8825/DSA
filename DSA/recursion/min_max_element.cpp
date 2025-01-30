#include<iostream>
#include<limits.h>
using namespace std;
void maxi_1(int arr[],int n,int i,int max){
      if(i>=n){
        cout<<"maxi_1:"<<max;
        return;
    }
    if(max<arr[i]){
        max=arr[i];
    }
    maxi_1(arr,n,i+1,max);
    //cout<<max;
}
void mini_1(int arr[],int n,int i,int min){
      if(i>=n){
        cout<<endl<<"mini_1:"<<min;
        return;
    }
    if(min>arr[i]){
        min=arr[i];
    }
    mini_1(arr,n,i+1,min);
   // cout<<min;
}
int maxi(int arr[],int n,int i,int  max){
//agr max pass by value rahega toh fun khtm hote hi uska kaam khtm
//isliye max ko pass by reference kr denge taki value main mein jo 
//max hai usme update hoti rahe
    if(i>=n){
        return  max;
    }
    if(max<arr[i]){
        max=arr[i];
    }
    maxi(arr,n,i+1,max);
    
}
int mini(int arr[],int n,int i,int & min){
//agr min pass by value rahega toh fun khtm hote hi uska kaam khtm
//isliye min ko pass by reference kr denge taki value main mein jo 
//min hai usme update hoti rahe
    if(i>=n){
        return min;
    }
    if(min>arr[i]){
        min=arr[i];
    }
    mini(arr,n,i+1,min);
}
int main(){
    int max=INT_MIN;
    int min=INT_MAX;

   int n;
   cout<<"enter the size of array:";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements:";
   for(int i=0;i<n;i++){
        cin>>arr[i];
   }
   int i=0;
   int ans_max= maxi(arr,n,i,max);
   int ans_min= mini(arr,n,i,min);
   cout<<"Max Ans:"<<ans_max<<endl;
   cout<<"Min_Ans:"<<ans_min<<endl;

    int max2=INT_MIN;
    int min2=INT_MAX;
   maxi_1(arr,n,i,max2);
   mini_1(arr,n,i,min2);
}
