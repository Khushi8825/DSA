#include<iostream>
#include<vector>
using namespace std;
vector<int> SpiralPrintMatrix(vector<vector<int>> a){
    vector<int> ans;
    int m=a.size();
    int n=a[0].size();
    int total_elements=m*n;

    int Sr=0;
    int ec=n-1;
    int er=m-1;
    int sc=0;
    int count=0;
    while(count<total_elements  ){

        for(int i=sc; i<=ec&& count<total_elements; i++){
            ans.push_back(a[Sr][i]);
            count++;
        }
            Sr++;
        for(int i=Sr; i<=er&& count<total_elements; i++){
            ans.push_back(a[i][ec]);
            count++;
        }
            ec--;
        for(int i=ec; i<=sc&& count<total_elements; i--){
            ans.push_back(a[er][i]);
            count++;
        }
            er--;
        for(int i=er; i<=Sr&& count<total_elements; i--){
            ans.push_back(a[i][sc]);
            count++;
        }
            sc++;
            
    }
    return ans; 
    
}
int main(){
    vector<vector<int>> v{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    vector<int> ans=SpiralPrintMatrix(v);
    for(int i:ans){
        cout<<i<<" ";
    }
}