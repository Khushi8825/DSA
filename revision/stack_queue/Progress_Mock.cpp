#include<bits/stdc++.h>
using namespace std;
queue<int> q;
void putting(vector<pair<int,int>>& arr, int& count){
    int a;
    int b;
    cin>>a>>b;
    if(count >= arr.size()){
        bool flag = false;
        for(int i = 0; i<arr.size(); i++){
            if(a == arr[i].first){
                arr[i].second = b;
                flag = true;
                q.push(a);
                break;
            }
        }

        if(!flag){
            int x = q.front();
            q.pop();
            for(int i = 0; i<arr.size(); i++){
                if(arr[i].first == x){
                    arr[i].first = a;
                    arr[i].second = b;
                    q.push(a);
                    break;
                }
            }
        }
    }
    else{
        arr[count].first = a;
        arr[count].second = b;
        q.push(a);
         count++;
    }
   
    return;
}
void getting(vector<pair<int, int>>& arr, int& count){
    int x;
    cin>>x;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i].first == x){
            cout<<arr[i].second<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main(){
    int n;
    int op;
    cin>>n;
    cin>>op;
    vector<pair<int, int>> arr(n);
    int count = 0; 
    for(int i = 0; i<op; i++){
        string s;
        cin>>s;
        if(s == "put"){
            putting(arr, count);
        }
        else if(s == "get"){
            getting(arr, count);
        }
        else{
            cout<<"Wrong input";
        }
    }
    return 0;
}