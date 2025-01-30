#include<iostream>
#include<string>
#include<vector>
using namespace std;
int index(string& str,int& n,int i,char& key){
    int ans=-1;
    if(i>=n) return ans;
    if(str[i]== key){
        ans=i;
        return ans;
    }
    return index(str,n,i+1,key);
}
bool checkey(string& str,int& n,int i,char& key){
    if(i>=n) return false;
    if(str[i]==key) return true;
    return checkey(str,n,i+1,key);
}
void allIdx(string& str,int& n,int i,char& key,vector<int>& a){
    if(i>=n) return;
    if(str[i]==key){
        a.push_back(i);
        //cout<<"present at:"<<i;
    }
    return allIdx(str,n,i+1,key,a);
}
int countchar(string& str,int& n,int i,char& key,int& count){
    
    if(i>=n) return count;
    if(str[i]==key){
        count++;
    }
     countchar(str,n,i+1,key,count);
    
}
int main(){
    char key;
    cin>>key;
    string str="lovebabbar";
    int n = str.size();
    int i=0;
    bool ans=checkey(str,n,i,key);
    cout<<key<<" is present:"<<ans<<endl;
    int idx=index(str,n,i,key);
    cout<<"present at:"<<idx<<endl;
    int count=0;
    int count1=countchar(str,n,i,key,count);
    cout<<count1<<endl;
    vector<int> a;
    allIdx(str,n,i,key,a);
    for(auto i:a){
        
        cout<<i<<" ";
    }
}