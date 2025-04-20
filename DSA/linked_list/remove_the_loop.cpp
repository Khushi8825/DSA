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
node* removeloop(node* &head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    // node* prev=fast;
    while(slow != fast){
      //  prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    //prev->next=NULL;
    return slow;
}
int countNodesinLoop(node *head){
    if(head==NULL || head->next==NULL){
        return 0;
    }
   
    int count=1;
    node*temp=head->next;
    while(temp!=head){
        temp=temp->next;
        count++;
    }
    return count;
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
    node* newnode7=new node(80);
    node* newnode8=new node(90);
    node* newnode9=new node(100);

    newnode->next=newnode1;
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;
    newnode4->next=newnode5;
    newnode5->next=newnode6;
    newnode6->next=newnode7;
    newnode7->next=newnode8;
    newnode8->next=newnode9;
    newnode9->next=newnode5;

    node* head=removeloop(newnode);
    
    int count=countNodesinLoop(head);
    cout<<count;

 }