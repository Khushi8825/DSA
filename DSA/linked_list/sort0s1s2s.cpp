#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node* insertAtTail(node* &head,node* &tail,int data){
    cout<<"hi";
    node* newnode=new node(data);
    if(head==NULL || tail ==NULL){
        head=newnode;
        tail=newnode;
        return head;
    }
  
    tail->next=newnode;
    tail=newnode;
    return head;
}

void print(node* &head){
    cout<<"hi";
    node* temp=head;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        head=insertAtTail(head,tail,data);
    }
    print(head);
}