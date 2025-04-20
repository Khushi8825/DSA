#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;

void enqueue(int value)
{
    if((rear+1==front)|| (front==0 && rear==SIZE -1)){
        printf("\n Queue is full , overflow \n");
        return;
    }
    
        if(front==-1){
            //first element
            front=rear=0;
        }
        else if(rear==SIZE-1){
            //wrap around
            rear=0;  
        }
        else{
            rear++;
        }
        queue[rear]=value;
        printf("\n value %d is inserted \n",value);
        return;
    
}

void dequeue(){
    if(front == -1){
        printf("\n queue is empty , underflow \n");
        return;
    }
    int deletedValue=queue[front];
    if(front==rear){
        front =rear=-1;
    }
    else if(front==SIZE-1){
        front = 0;
    }
    else{
        front++;
    }
    printf("\n deleted value is %d \n",deletedValue);
    return;
}

void display(){
    
    if(front==-1){
        printf("\n queue is empty \n");
        return;
    }
    int i=front;
    if(front<=rear){
        while(i<=rear){
            printf(" %d",queue[i]);
            i++;
        }
    }
    else{
        while(i<SIZE){
            printf(" %d",queue[i]);
            i++;
        }
        i=0;
        while(i<=rear){
            printf(" %d",queue[i]);
            i++;
        }
    }
    return;
}

int main(){
    enqueue(4);
    display();
    enqueue(3);
    display();
    enqueue(7);
    enqueue(0);
    enqueue(1);
    display();
    dequeue();
    dequeue();
    display();
    dequeue();
    display();
    
    return 0;
}
