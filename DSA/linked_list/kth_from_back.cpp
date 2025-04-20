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
int length(node* &head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
node* delete_node(node* &head,int pos){
    if(head==NULL){
        cout<<"empty list.";
        return head;
    }
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    // int len = length(head);
    // if(pos == len){
        int i=0;
        node* prev=head;
        while(i<pos){
            prev=prev->next;
            i++;
        }
        node* temp =prev->next;
        prev->next=NULL;
        delete temp;
    
        return head;
}
node* Kth_node_delete_last(node* &head,int pos){
    int len=length(head);
    pos=len-pos-1;
    head = delete_node(head,pos);
    return head;

}
node* insertAtTail(node* &head,node* &Tail,int data){
    node* newnode = new node(data);
    if(Tail==NULL){
        head=newnode;
        Tail=newnode;
    }
    else if(head==NULL){
        head=newnode;
        Tail=newnode;
    }
    else{
        //non-empty linkedlist
        Tail->next=newnode;
    }
    Tail=newnode;
    return head;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    cout<<"enter the length of Linked list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        head=insertAtTail(head,tail,data);
    }
    print(head);
    int pos;
    cout<<"enter pos from last you want to delete(0-index based):";
    cin>>pos;
    head=Kth_node_delete_last(head,pos);
    print(head);
}