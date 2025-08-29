#include<iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    int state;
    TreeNode(int val){
        this->val=val;
        left=NULL;
        right=NULL;
        state=1;
    }
};
class Stack{
    public:
    TreeNode** arr;
    int size;
    int top;
    
    Stack(int size){
        arr=new TreeNode*[size];
        this->size=size;
        top=-1;
    }
    void push(TreeNode* node){
        if(size-top>1){
            top++;
            arr[top] = node;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    TreeNode* peek(){
        if(top==-1){
            return NULL;
        }
        else{
            return arr[top];
        }
    }
};

void Traversal (TreeNode* root){
    Stack st(100);
    int arr_pre[100],arr_in[100],arr_post[100];
    int i=0;
    int j=0;
    int k=0;
    st.push(root);
    while(!st.isEmpty()){
        TreeNode* temp=st.peek();
        st.pop();
        if((*temp).state==1){
            arr_pre[i]=temp->val;
            i++;
            temp->state = 2;
            st.push(temp);
            if(temp->left) st.push(temp->left);
        }
        else if(temp->state==2){
            arr_in[j]=temp->val;
            j++;
            temp->state = 3;
            st.push(temp);
            if(temp->right) st.push(temp->right);
    
        }
        else if(temp->state==3){
            arr_post[k]=temp->val;
            k++;
        }

    }
    for(int a=0;a<i;a++){
        cout<<arr_pre[a]<<" ";
    }
    cout<<endl;
    for(int b=0;b<j;b++){
        cout<<arr_in[b]<<" ";
    }
    cout<<endl;
    for(int c=0;c<k;c++){
        cout<<arr_post[c] <<" ";
    }
    cout<<endl;
}
int main(){
    TreeNode* root = new TreeNode(10);
    TreeNode* second = new TreeNode(9);
    TreeNode* third = new TreeNode(8);
    TreeNode* fourth = new TreeNode(7);
    TreeNode* fifth = new TreeNode(6);
    TreeNode* sixth = new TreeNode(5);
    TreeNode* seventh = new TreeNode(4);
    TreeNode* eighth = new TreeNode(3);

    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    fourth->left=sixth;
    fourth->right=seventh;
    third->left=eighth;
    Traversal(root);
}