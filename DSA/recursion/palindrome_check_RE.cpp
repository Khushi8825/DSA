#include<iostream>
#include<string>
using namespace std;
bool check_palindrome(string& a,int i,int j){
    //base case
    if(i>j){
        return true;
    }

    if(a[i]!=a[j]){
        return false;
    }
    else{
    return check_palindrome(a,i+1,j-1);
    }
    
}
int main(){
    string a = "ba";
    int i = 0;
    int j = a.size()-1;
    bool check=check_palindrome(a,i,j);
    cout<<check;
}