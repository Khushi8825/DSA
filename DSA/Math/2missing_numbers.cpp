#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<cmath>
using namespace std;
vector<int> solve(int arr[], int n){
    int sum = 0;
    int sqSum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        sqSum += arr[i]*arr[i];
    }
    int sumOg = 0;
    int sqSumOg = 0;
    for(int i = 1; i<= n+2; i++){
        sumOg += i;
        sqSumOg += i*i;
    }
    int difSum = sumOg - sum;  //x+y
    int difsqSum = sqSumOg - sqSum;  //x^2 + y^2

    int xy = (difSum * difSum - difsqSum)/2;   //(x+y)^2 - (x^2 + y^2)

    int d = sqrt(difSum* difSum - 4*xy);

    int x = (difSum + d)/2;
    int y = (difSum - d)/2;
    return {x,y};
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    cout<< "can enter number from 1 to "<<n<<"+2"<<endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans = solve(arr,n);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}