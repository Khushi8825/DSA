#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* reverse(node* &prev,node* &curr){
    if(curr == NULL){
        return prev;
    }
    node* next=curr->next;
    curr->next=prev;
    reverse(curr,next);
        
}
node* reverseusingloop(node* &head){
    node* prev=NULL;
    node*curr = head;

    while(curr != NULL){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* tail=new node(4);

    head->next=second;
    second->next=third;
    third->next=tail;
    tail->next=NULL;
    print(head);
    cout<<endl;
    node* prev=NULL;
    node*curr=head;
    head=reverse(prev,curr);
    
    print(head);
    cout<<endl;

    head=reverseusingloop(head);
    print(head);
}