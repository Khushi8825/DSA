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
node* traverse(node* &head,int position){
    int i=1;
    node* temp=head;
    while(i<position){
        temp=temp->next;
        i++;
    }
    return temp;
}
node* tortiseHare_method(node* &head){
    if(head==NULL){
        cout<<"Linked is empty";
        return head;
    }
    if(head->next==NULL){
        return head; 
    }

    node* slow = head;
    node* fast = head;

    while(slow!=NULL && fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(50);
    node* fifth=new node(40);
    node* sixth=new node(70);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    // int len=length(first);
    // int middle=(len/2)+1;
    // node* head=traverse(first,middle);
    // print(head);
    node* head=tortiseHare_method(first);
    print(head);
}