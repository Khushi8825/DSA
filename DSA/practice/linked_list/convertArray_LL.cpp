#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data =  data;
        next = NULL;
    }
};
Node* convertArray_LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}
int length(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;

}
int main(){
    vector<int> arr;
    int i;
    while(cin>>i && i != -1){
        arr.push_back(i);
    }
    Node* head = convertArray_LL(arr);
    print(head);
    cout<<endl;
    
    
    int count = length(head);
    cout<<count << endl;
    head = reverse(head);
    print(head);

}