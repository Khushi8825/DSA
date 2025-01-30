#include<iostream>
#include<vector>
//program or we can say method to find prime numbers.
using namespace std;
vector<bool> prime(int n){
    //if(n==0) return 0;
    vector<bool> Prime(n,true);
    Prime[0] = Prime[1] = false;

    //int ans=0;
    for(int i=2; i<n; i++){
        if(Prime[i]){
           // ans++;
            int j=2*i;
            while(j<n){
                Prime[j]=false;
                j+=i;
            }
        }
    }
    return Prime;
}
int main(){
int n;
cin>>n;
vector<bool> Prime = prime(n);
    for(int i=0;i<=25;i++){
        if(Prime[i]){
            cout<<i<<" ";
        }
    }

} 