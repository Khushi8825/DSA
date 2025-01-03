#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> value{1,-1,2,-2,8,7,-6,-4,-3,9};
    int start=0;
    int i=0;
    int end=value.size()-1;
    
    for(int i=0;end>start;i++){
        if(value[i]>0){
            swap(value[i],value[end]);
            start++;
            i++;
            end--;
        }
    }
    for(auto val: value){
        cout<<val<<" ";
    }
    
    
    }