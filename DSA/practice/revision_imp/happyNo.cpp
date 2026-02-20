#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int next(int n){
    int total = 0;
    while(n>1){
        int rem = n%10;
        n /= 10;
        total += rem* rem;
    }
    return total;
}
bool happyNumber(int n){
    int slow = n;
    int fast = next(n);
    while(1){
        if(slow == fast){
            return false;
        }
        else if(fast == 1){
            return true;
        }
        else{
            slow = next(slow);
            fast = next(next(slow));
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;

    bool ans = happyNumber(n);
    cout << ans;
    return 0;
}
