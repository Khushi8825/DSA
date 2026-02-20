#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
//recursive preorder build
Node* createTree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left=createTree();
    root->right=createTree();
    return root;
}
void print(Node* root){
    if(root == NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
    return;
}

Node* levelOrder(vector<int> arr){
    if(arr.size()==0 || arr[0] == -1){
        return NULL;
    }
    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(i<arr.size() && arr[i] != -1){
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;

        if(i<arr.size() && arr[i] != -1){
            temp->right = new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}
int main(){
    Node* root = createTree();
    print(root);
    cout<<endl;
    vector<int> arr = {1, 2, 3, 4, 5, -1, 6};
    Node* levelroot = levelOrder(arr);
    print(levelroot);
    return 0;
}