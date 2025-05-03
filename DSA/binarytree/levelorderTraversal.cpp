#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int val;
    node* left;
    node* right;
    node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
vector<vector<int>> LevelOrderTraversal(struct node* &root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* Node=q.front();
            // cout<<"pushed";
            // cout<<Node->val<<endl;
            q.pop();
            if(Node->left!=NULL) q.push(Node->left);
            if(Node->right!=NULL) q.push(Node->right);
            level.push_back(Node->val);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    //static way of creating tree;
    struct node* root = new node(8);
    struct node* second = new node(7);
    struct node* third = new node(6);
    struct node* fourth = new node(5);
    struct node* fifth = new node(4);
    struct node* sixth = new node(3);

    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    third->right=sixth;
    vector<vector<int>> ans = LevelOrderTraversal(root);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}