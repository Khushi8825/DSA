#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int first(int arr[],int size,int item){
   int start=0;
   int end= sizeof(arr)-1;
   int mid= start +(end-start)/2;
   int x=-1;
   while(start<=end){
     if(arr[mid]==item){
       //store ans and then left search
         x=mid;
        end=mid-1;
     } 
     else if(item> arr[mid]){
        //right search
        start=mid+1;
     }
     else if(item<arr[mid])
     {
        end=mid-1;
     }
     mid = start+(end-start)/2;
   }
   return x;
}
int main(){
    int arr[]={1,2,3,4,4,4,4,5,7,8};
    int it=4;
    int firstocc = first(arr,sizeof(arr),it);
    cout<< "ans is:"<< firstocc;
    
}