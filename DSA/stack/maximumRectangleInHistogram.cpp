#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextSmallerElement(vector<int>& arr){
    stack<int> s;
    s.push(arr.size());
    vector<int> ans(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        while(s.top() != arr.size() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(vector<int>& arr){
    stack<int> s;
    s.push(-1);
    vector<int> ans(arr.size());
    for(int i=0;i<arr.size();i++){
        while(s.top() != -1 && arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int area_of_rectangle(vector<int>& arr){
    vector<int> next;
    next=nextSmallerElement(arr);
    vector<int> prev;
    prev=prevSmallerElement(arr);
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int len=arr[i];
        int width=next[i]-prev[i]-1;
        int area=len*width;
        ans.push_back(area);
    }
    int max_val = *max_element(ans.begin(),ans.end());
    return max_val;
}
int main(){
    vector<int> arr;
    int size;
    cout<<"enter the size:";
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int area=area_of_rectangle(arr);
    cout<<area;

}