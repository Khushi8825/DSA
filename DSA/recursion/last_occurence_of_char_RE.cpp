#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
//right to left search
int last_occurence(string& s,int i,char& e){
    if(i<0){
        return -1;
    }
    if(s[i]==e){
        return i;
    }
    else{
    return last_occurence(s,i-1,e);
    }
}
//left to right search
int last_occurence1(string& s,int j,char& e,int& ans){
    if(j>=s.size()){
        return ans;
    }
    if(s[j]==e){
       ans=j; 
    }
    
    last_occurence1(s,j+1,e,ans);
    // return ans;
    
}
int main(){
    string s="abbcdefds";
    int i=s.size()-1;
    char e='d';
    int j=0;
    int ans1=-1;
    int ans=last_occurence(s,i,e);
    cout<<ans<<endl;
    int ans3=last_occurence1(s,j,e,ans1); 
    cout<<ans3<<endl;
    
}