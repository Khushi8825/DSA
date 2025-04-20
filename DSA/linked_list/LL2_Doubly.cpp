#include<iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    ListNode(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
ListNode* reverseDLL(ListNode* head) {
    // Your code here
    ListNode* pre=NULL;
    ListNode*curr=head;
       if(pre==NULL){
            ListNode* next=curr->next;
            curr->next=pre;
            // pre->next=curr;
            curr->prev=NULL;
            pre=curr;
            curr=next;
        }
    
    while(curr != NULL){
        ListNode* next=curr->next;
        curr->next=pre;
        pre->next=curr;
        curr->prev=next;
        pre=curr;
        curr=next;
    }
    return pre;
}
void print(ListNode* &head){//time complexity=O(n);
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

int lenght_LL(ListNode* &head){//time complexity=O(n);
    ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
//time complexity O(1)
void insertion_at_head(ListNode* &head,ListNode* &tail,int data){
    if(head==NULL){
        ListNode* newnode=new ListNode(data);
        head=newnode;
        tail=newnode;
        return;
    }
    ListNode* newnode=new ListNode(data);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    return;
}

void insertion_at_tail(ListNode* &head ,ListNode* &tail, int data){
    if(head==NULL){
        ListNode* newnode = new ListNode(data);
        head=newnode;
        tail=newnode;
        return;
    }
    ListNode* newnode= new ListNode(data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    return;
}

void insertAtPosition(ListNode* &head,ListNode* &tail,int data,int position){
    if(head==NULL){
        ListNode* newnode = new ListNode(data);
        head = newnode;
        tail = newnode;
        return;
    }
    else{ 
        if(position == 1){
            insertion_at_head(head,tail,data);
            return;
        }
        int len=lenght_LL(head);
        if(position > len){
            insertion_at_tail(head,tail,data);
            return;
        }
        ListNode* newnode = new ListNode(data);
        ListNode* pre=head;
        int i=1;
        while(i<position-1){
            pre=pre->next;
            i++;
        }
        ListNode* curr=pre->next;

        newnode->next=curr;
        newnode->prev=pre;
        pre->next=newnode;
        curr->prev=newnode; 

    }
}

void deletion(ListNode* &head,ListNode* &tail,int position){
    if(head==NULL){
        cout<<"empty";
        return;
    }
    else{
    if(head->next==NULL){
        ListNode* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }    
        if(position==1){
        ListNode* temp = head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    int len=lenght_LL(head);
    int i=1;
    if(position>len){
        ListNode* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return; 
    }
    ListNode* pre=head;
    while(i<position-1){
        pre=pre->next;
        i++;
    }
    ListNode* temp=pre->next;
    pre->next->prev=pre;
    pre->next=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    return;
}
}
int main(){
    ListNode* newnode=new ListNode(10);
    ListNode* newnode2=new ListNode(20);
    ListNode* newnode3=new ListNode(30);
    ListNode* newnode4=new ListNode(40);
    ListNode* newnode5=new ListNode(50);

    newnode->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;
    newnode4->next=newnode5;

    newnode2->prev=newnode;
    newnode3->prev=newnode2;
    newnode5->prev=newnode4;
    newnode4->prev=newnode3;

    cout<<"original linked list"<<endl;
    print(newnode);

    // insertion_at_head(newnode,newnode5,1);

    // cout<<"linked list after insertion at head:"<<endl;
    // print(newnode);

    // insertion_at_tail(newnode,newnode5,6);

    // cout<<"linked list after insertion at tail:"<<endl;
    // print(newnode);

    // insertAtPosition(newnode,newnode5,10,5);

    // cout<<"linked list after insertion at middle:"<<endl;
    // print(newnode);
    // cout<<"length : "<<lenght_LL(newnode);

    // deletion(newnode,newnode5,6);

    // cout<<"linked list after deletion :"<<endl;
    // print(newnode);

    // cout<<"length : "<<lenght_LL(newnode);
    
    ListNode* head =reverseDLL(head);
    print(head);
    return 0;

}