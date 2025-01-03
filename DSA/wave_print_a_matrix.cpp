#include<iostream>
#include<vector>
using namespace std;
void WavePrintAMatrix(vector<vector<int>>a){
    int m=a.size();
    int n=a[0].size();
    for(int i=0;i<n;i++){
        if((i&1)==0){
            for(int j=0;j<m;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
    }

}
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    WavePrintAMatrix(v);
}