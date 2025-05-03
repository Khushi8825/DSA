#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurence(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int lastOccurence(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int search2(vector<vector<int>>& matrix){
    int count=0;
    int max=0;
    int maxidx=-1;
    for(int i=0;i<matrix.size();i++){
        int m=lastOccurence(matrix[i],1);
        int n=firstOccurence(matrix[i],1);
        if(m != -1 || n != -1){
            count=m-n+1;
        }

        if(max<count){
            max=count;
            maxidx=i;
        }
    }
    if(max==0) return -1;
    return maxidx;
}
int search(vector<vector<int>>& matrix){
    int max=0;
    int maxidx=-1;
    for(int i=0;i<matrix.size();i++){
    int count=0;
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==1) count++;
        }
        if(max<count){
            max=count;
            maxidx=i;
        }
   }
   return maxidx; 
}
int main(){
    vector<vector<int>> matrix;
    for(int i=0;i<3;i++){
        vector<int> row;
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    int ans=search(matrix);
    cout<<ans<<endl;
    int ans2=search2(matrix);
    cout<<ans2<<endl;
}