#include<bits/stdc++.h>
using namespace std ;
class Node{
public:
    int data;
    Node* next ;
    Node(int data1){
        data = data1 ;
        next = NULL ;
    }
};
int main()
{
    vector<vector<int>> arr = {{1,1,5,6},{1,2,5,6}} ;
    vector<int> v ;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            v.push_back(arr[i][j]) ;
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end()) ;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    Node* head = new Node(v[0]) ;
    Node* temp = head ;
    for(int i=1;i<v.size();i++)
    {
        Node* newNode = new Node(v[i]) ;
        temp->next = newNode ;
        temp = newNode ;
    }
    temp = head ;
    while(temp!=NULL)
    {
        cout<<temp->data<<" " ;
        temp = temp->next ;
    }
}

