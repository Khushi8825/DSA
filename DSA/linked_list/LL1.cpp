#include<iostream>
using namespace std;

class linkedlist
{
    public:
    int data;
    linkedlist* next;

    linkedlist(){
        this->data=0;
        this->next=NULL;
    }
    linkedlist(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(linkedlist* head){
    linkedlist* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }


}

void insertAtHead(linkedlist* &head,int data){

    linkedlist* newnode = new linkedlist(data);

    newnode->next=head;
    head=newnode;

}
void insertAttail(linkedlist* &tail ,linkedlist* &head, int data){
    linkedlist* newnode= new linkedlist(data);
    if(tail==NULL){
        //empty likedlist
        tail=newnode;
        head= newnode;
    }
    else{
        //non-empty linkedlist
        tail->next=newnode;
    }
   if(head==NULL){
         head=newnode;
    }
   tail=newnode;

}
void insertATposition(int position,linkedlist* &tail,linkedlist* &head, int data ){
    if(head == NULL){
        linkedlist* newnode=new linkedlist(data);
        head=newnode;
        tail=newnode;
        return;
    }
    // if(position == 0){
    //     insertAtHead(head,data);
    //     return;
    // }
    
        //find position
        int i=1;
        linkedlist* pre=head;
        while(i<position){
            pre=pre->next;
            i++;
        }
        linkedlist * curr=pre->next;
        //step 2 : newnode create
        linkedlist* newnode= new linkedlist(data);
        //step 3 : 
        newnode->next=curr;

        pre->next=newnode;
    

}
int find_length_of_LL(linkedlist* &head){
    int i=1;
    int count=0;
    linkedlist* prev=head;
    while(prev->next!=NULL){
        prev=prev->next;
        count++;
    }
    return count;
}
void delete_node(int position,linkedlist* &head,linkedlist* &tail,int data){
    if(head==NULL){
        cout<<"empty list.";
        return;
    }
    if(position==1){
        linkedlist* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int len = find_length_of_LL(head);
    if(position == len){
        int i=1;
        linkedlist* prev=head;
        while(i<position){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        linkedlist* temp = tail;
        tail=prev;
        delete temp;
    }
}
int main(){
    //linkedlis  t* first = new linkedlist(1);
    // linkedlist* head = NULL;
    // linkedlist* tail = NULL;
    linkedlist* first =new linkedlist(10);
    linkedlist* second =new linkedlist(20);
    linkedlist* third =new linkedlist(30);
    linkedlist* forth =new linkedlist(40);
    linkedlist* fifth =new linkedlist(50);
    linkedlist* sixth =new linkedlist(60);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
    
    // insertAtHead(first,10);
    // insertAtHead(first,20);
    // insertAtHead(first,30);
    // insertAtHead(first,40);
    // insertAtHead(first,50);
    // insertAtHead(first,60);
    // insertAtHead(first,70);
    // insertAtHead(first,80);
    // insertAtHead(first,90);
    // insertAtHead(first,100);

    insertATposition(4,sixth,first,10);





    cout <<"linked list"<<" "; 
    print(first);
    cout<<find_length_of_LL(first);
}