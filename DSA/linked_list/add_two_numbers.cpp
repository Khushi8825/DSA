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
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node* solve(node* &head1,node* &head2){
    head1=reverse(head1);
    head2=reverse(head2);

    //adding
    node* ansHead = NULL;
    node* ansTail = NULL;
    int carry=0;

    while(head1 != NULL && head2 != NULL){
        int sum= carry + head1->data + head2->data;
        int digit=sum%10;
        carry = sum/10;

        node* newnode=new node(digit);
        if(ansHead == NULL){
            //first node insert krre ho
            ansHead = newnode;
            ansTail =newnode;
        }
        else{
            ansTail->next=newnode;
            ansTail=newnode;
        }
        head1=head1->next;
        head2=head2 ->next;
    }
    while(head1 != NULL){
        int sum=carry+ head1->data;
        int digit=sum%10;
        int carry=sum/10;
        node* newnode= new node(digit);
        ansTail -> next = newnode;
        ansTail = newnode;
        head1 = head1-> next;
    }
    while(head2 != NULL){
        int sum=carry+ head2->data;
        int digit=sum%10;
        int carry=sum/10;
        node* newnode= new node(digit);
        ansTail -> next = newnode;
        ansTail = newnode;
        head2 = head2-> next;
    }
    while(carry != 0){
        int sum=carry;
        int digit = sum% 10;
        carry = sum/10;
        node* newnode = new node(digit);
        ansTail -> next = newnode;
        ansTail = newnode;
    }

    ansHead=reverse(ansHead);
}
int main(){
    node* head1=new node(2);
    node* second1=new node(4);
    head1->next=second1;

    node* head2=new node(2);
    node* second2=new node(3);
    node* third2=new node(4);
    head2->next=second2; 
    second2->next=third2;

    head1=solve(head1,head2);
    print(head1);

}