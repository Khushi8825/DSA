#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<limits>
#include<cctype>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(){
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(vector<int>& arr, int& i){
    if(i >= arr.size() || arr[i] == -1){
        return nullptr;
    }

    Node* node = new Node(arr[i++]);
    node->left = buildTree(arr, i);
    node->right = buildTree(arr, i);
    return node;
}
void print(Node* head){
    // Node* temp = head;
    if(head == NULL) return ;
    print(head->left);
    cout<<head->data<<" ";
    print(head->right);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i];
    int i = 0;
    Node* head = buildTree(arr, i);
    print(head);
    return 0;
}