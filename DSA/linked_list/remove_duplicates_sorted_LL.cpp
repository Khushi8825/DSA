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
void remove_duplicate(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp != NULL){
        if((temp->next!=NULL) && temp->data == temp->next->data){
           temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

int main(){
    node* newnode=new node(1);
    node* newnode1=new node(1);
    node* newnode2=new node(2);
    node* newnode3=new node(2);
    node* newnode4=new node(3);
    node* newnode5=new node(4);
    node* newnode6=new node(4);

    newnode->next=newnode1;
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;
    newnode4->next=newnode5;
    newnode5->next=newnode6;
    newnode6->next=NULL;

    print(newnode);
    
    remove_duplicate(newnode);
    print(newnode);

}