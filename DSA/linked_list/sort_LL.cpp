//if integer is b/w 0-100 we can use counting sort tC-O(n)  & SC-O(1);
#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
Node* create(Node* &head,Node* &tail,int data){
    Node* newnode = new Node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return head;
    }
    tail->next=newnode;
    tail=newnode;
    return head;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* sort(Node* &head){
    if(head==NULL) return head;
    int count[100] = {0};
    Node* temp=head;
    while(temp!=NULL){
        count[temp->val]++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<=100;i++){
        while(count[i]>0){
            temp->val=i;
            temp=temp->next;
            count[i]--;
        }
        if(temp==NULL){
            break;
        }
    }
    return head;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int size;
    cout<<"enter the size:";
    cin>>size;
    for(int i=0;i<size;i++){
        int data;
        cin>>data;
        head=create(head,tail,data);
    }
    print(head);
    Node* newhead=sort(head);
    print(newhead);
}