#include<iostream>
using namespace std;
void prime(int n){
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<=i/2;j++){
            if(i%j==0) count++;
        }
        if(count==2) cout<<i<<endl;
    }

}
int main(){
    int N;
    cin>>N;
    prime(N);
    return 0;
    
}