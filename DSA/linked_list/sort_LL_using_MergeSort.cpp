#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* Create(Node* &head,Node* tail,int data){
    Node* newnode = new Node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return head;
    }
    tail->next=newnode;
    tail=newnode;
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* findmiddle(Node* head){
    Node* slow=head;
    Node* fast=fast;
    while(fast!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
Node* sortList(Node* head){
    if(head==NULL) return head;
    if(head->next == NULL) return head;

    Node* mid=findmiddle(head);

    Node* leftHead=head;
    Node* righthead=mid->next;

    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int data;
        cin>>data;
        head=Create(head,tail,data);
    }
    print(head);
}