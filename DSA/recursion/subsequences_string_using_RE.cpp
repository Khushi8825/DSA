#include<vector>
#include<iostream>
#include<string>
using namespace std;
void subsequences(string& a,int i,int& n,string ans){
    if(i>=n) {
        cout<<ans<<endl;
        return ;
    }
    
    subsequences(a,i+1,n,ans);    

    ans.push_back(a[i]);
    subsequences(a,i+1,n,ans);

}
int main(){
    string a="abc";
    int n=a.size();
    int i=0;
    string ans="";
    subsequences(a,i,n,ans);
}