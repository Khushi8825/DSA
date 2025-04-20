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
int length(node* head){
    node* temp=head;
    int count=0;
    while(temp != NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
node* reverse(node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    int len=length(head);
    if(k>len){
        cout<<"invalid."<<endl;
        return head;
    }
    node* pre=NULL;
    node* curr=head;
    node* next=curr->next;
    int i=0;
    while(i<k){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
        i++;
    }
    if(next!=NULL){
        head->next=reverse(curr,k);
    }
    return pre;
}
void print(node* &head){
    int i=0;
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
int main(){
    node* newnode=new node(10);
    node* newnode1=new node(20);
    node* newnode2=new node(30);
    node* newnode3=new node(40);
    node* newnode4=new node(50);
    node* newnode5=new node(60);
    node* newnode6=new node(70);

    newnode->next=newnode1;
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;
    newnode4->next=newnode5;
    newnode5->next=newnode6;
    newnode6->next=NULL;
    print(newnode);
    newnode=reverse(newnode,3);
    print(newnode);

}