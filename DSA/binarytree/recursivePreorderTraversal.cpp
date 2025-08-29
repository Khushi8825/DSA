#include<iostream>
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
class stack{
    public:
    ListNode** arr;
    int top;
    int size;

    stack(int size){
        arr = new ListNode*[size];
        top=-1;
        this->size=size;
    }

    void push(ListNode* node){
        if(size-top>1){
          top++;
          arr[top]=node;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout << "underflow" << endl;
            return;
        }
        top--;
    }
    ListNode* peek(){
        if(top == -1){
            return NULL;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

void preorderTraversal(ListNode* root){
    int arr_pre[100];
    if(root == NULL) return;
    int i=0;
    stack st(10);
    st.push(root);
    while(!st.isEmpty()){
        ListNode* Node = st.peek();
        st.pop();
        if(Node->right != NULL) st.push(Node->right);
        if(Node->left != NULL) st.push(Node->left);
        arr_pre[i]=Node->val;
        i++;
    }
    for(int a=0;a<i;a++){
        cout<<arr_pre[a]<<" ";
    }
}
void PreorderTraversal_recursive(ListNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    PreorderTraversal_recursive(root->left);
    PreorderTraversal_recursive(root->right);
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
    PreorderTraversal_recursive(root);
    preorderTraversal(root);
    
}