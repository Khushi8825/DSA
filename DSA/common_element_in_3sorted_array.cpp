#include<iostream>
#include<vector>
#include<set>

using namespace std;
//not optimal and correct for all test cases
// vector<int> CommonElement(int arr1[100], int arr2[100], int arr3[100], int n, int m, int o){
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         for( int j=0; j<m; j++){
//             if(arr1[i]==arr2[j]){
//                 int a = arr1[i];
//                 for(int k=0;k<o;k++){
//                     if(arr3[k] == a){
//                       ans.push_back(a);
//                     }
//                 }
//             }
//         }
//     }
//  return ans;
// }


//this is optimal solution
//but ye code fatega jb dublicate elements honge array mein
//so we will use set datastructure instead of vector 
//kyuki set mein duplicate save nhi hota
vector<int> CommonElement(vector<int>arr1,vector<int> arr2, vector<int>arr3){
    vector<int> ans;
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
        if((arr1[i]==arr2[j])&&(arr2[j]==arr3[k])){
            ans.push_back(arr1[i]);
            i++,j++,k++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr3[k]) j++;
        else k++;
    }
    return ans;
}

vector<int> RemoveDuplicate(int *arr, int n){
       vector<int> ans;
    if(n==0) return ans;
    int i=0;
    while(i<n){
        if( i+1>=n || arr[i]!=arr[i+1]){
            
            ans.push_back(arr[i]);
            i++;
        }
        else {
            i++;
        }
    }
    return ans;
}
int main(){
int a[100],b[100],c[100],as,bs,cs;
cout<<"Enter the size of array a:"<<endl;
cin>>as;
cout<<"Enter the size of array b:"<<endl;
cin>>bs;
cout<<"Enter the size of array c:"<<endl;
cin>>cs;
cout<<"Enter the elements of array a:"<<endl;
for(int i=0; i<as; i++){
    cin>>a[i];
}

cout<<"Enter the elements of array b:"<<endl;
for(int i=0; i<bs; i++){
    cin>>b[i];
}

cout<<"Enter the elements of array c:"<<endl;
for(int i=0; i<cs; i++){
    cin>>c[i];
}

vector<int> arr1=RemoveDuplicate(a,as);
cout<<"inputed array after removing duplicate elements: ";
for(int i:arr1){
    cout<<i<<" ";
}
cout<<endl<<endl;
vector<int> arr2=RemoveDuplicate(b,bs);
for(int i:arr2){
    cout<<i<<" ";
}
cout<<endl<<endl;
vector<int> arr3=RemoveDuplicate(c,cs);
for(int i:arr3){
    cout<<i<<" ";
}
cout<<endl<<endl;


vector<int> ans = CommonElement(arr1,arr2,arr3);
for(int i:ans){
    cout<<i<<" ";
}

}

