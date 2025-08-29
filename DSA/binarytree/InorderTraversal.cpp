#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct ListNode{
    int val;
    ListNode* left;
    ListNode* right;
    ListNode(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
vector<int> Inordertraversal(ListNode* root){
    stack<ListNode*> st;
    ListNode* node=root;
    vector<int> inorder;
    while(true){
        if(node != NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            inorder.push_back(node->val);
            node=node->right;
        }
    }
    return inorder;
}
void Inorder_recursive_Traversal(ListNode* root){
    if(root==NULL){
        return;
    }
    Inorder_recursive_Traversal(root->left);
    cout<<root->val<<" ";
    Inorder_recursive_Traversal(root->right);
}
int main(){
    
    ListNode* root = new ListNode(10);
    ListNode* second = new ListNode(6);
    ListNode* third = new ListNode(7);
    ListNode* fourth = new ListNode(8);
    ListNode* fifth = new ListNode(5);
    ListNode* sixth = new ListNode(4);

    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    third->right=sixth;
    Inorder_recursive_Traversal(root);
    cout<<endl;
    vector<int> ans = Inordertraversal(root);
    for(auto i : ans){
        cout<<i<<" ";
    }
}