#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> sum(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int carry = 0;
    int digit, x;
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    while (i >= 0 && j >= 0){
        x = a[i] + b[j] + carry;
        digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        i--;
        j--;
    }
    while(i>=0){
        //a[i]=0;
        x = a[i] + 0 + carry;
        digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        i--;
        
    }
    while(j>=0){
        
        x = 0 + b[j] + carry;
        digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        j--;
    }
    if(carry){
        ans.push_back(carry);
    }
    while(ans[ans.size()-1]==0){
     ans.pop_back();
    } 
       
reverse(ans.begin(),ans.end());

return ans;
}

int main(){
    vector<int> a{0,1,2,3};
    vector<int> b{3, 4, 5};
    // for(int i:a){
    //     cin>>i;
    // }
    // for(int j:b){
    //     cin>>j;
    // }
    vector<int> ans = sum(a, b);
    // for(int i:ans){
    //     if(i==0)
    //     ans.pop_back();
    // }
    for (int i : ans)
    {
        cout << i << " ";
    }
}