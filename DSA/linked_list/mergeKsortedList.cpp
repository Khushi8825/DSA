#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
int main(){
    vector<vector<int>> arr={{1,2,3},{2,4,5}};
    vector<int> a;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            a.push_back(arr[i][j]);
        }
    }
    sort(a.begin(),a.end());
    Node* head=new Node(a[0]);
    Node* temp=head;
    for(int i=1;i<a.size();i++){
        Node* newnode=new Node(a[i]);
        temp->next=newnode;
        temp=newnode;
    }
    temp=head;
    while(temp!=NULL){
        cout<<(*temp).val<<" ";
        temp=temp->next;
    }
} 