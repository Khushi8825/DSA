#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertInToBST(Node* root,int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(root->data > data){
        root->left = insertInToBST(root->left,data);
    }
    else{
        root->right = insertInToBST(root->right,data);
    }
}
void PreOrdertraversal(Node* root){
     if(root == NULL){
        return;
    }
    cout<<root->data;
    PreOrdertraversal(root->left);
    PreOrdertraversal(root->right);
}
void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root =insertInToBST(root,data);
        cin>>data;
    }
}
int main(){
    Node* root =NULL;
    cout << "Enter the data for Node" << endl; 
    takeInput(root);
    cout<<"printing the data"<<endl;
    PreOrdertraversal(root);
    return 0;

}