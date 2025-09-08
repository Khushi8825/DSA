//Tabulation with optimal space complexity
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev = 1; //base case
    int prev2 = 0;
    int curri; //current sum of last two digits
    for(int i = 2; i<=n; i++){
        curri = prev2 + prev;
        prev2 = prev;
        prev = curri;
    }
    cout<<prev;
}