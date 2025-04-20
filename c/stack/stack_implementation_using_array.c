#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[20];
void push(int*,int,int);
int pop(int*);
void display(int*);
void main(){
    printf("enter the size of stack : ");
    int size;
    int a,data,item;
   
    scanf("%d",&size);
    if(size>20){
        printf("\n stack size is invalid enter value should be less than 20 ");
        getch();
        return;
    }
   do{
    printf("\n 1.PUSH \n 2.POP \n 3.EXIT");
    printf("\n Function you want to run:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    printf("Enter the data you want to insert: ");
    scanf("%d",&data);
    push(stack,data,size);
    printf("\n stack status: \n");
    display(stack);
    break;
    case 2:
    printf("popped item is : %d",pop(stack));
    break;

    case 3:
    printf("End");
    break;
    }

   }while(a!=3);

   getch();
   return;
}

void push(int * stack,int data,int size){
    if(top==size-1){
        printf("\n Overflow, insertion is not possible");
        return;
    }
    else{
        top = top+1;
        stack[top]=data;
    }
    return;
}

int pop(int* stack){
    int item;
    if(top==-1){
        printf("\n underflow insertion is not possible");
        return 0;
    }
    else{
        item = stack[top];
        top=top-1;
    }
    return item;
}

void display(int * stack){
    if(top==-1){
        printf("\n empty stack");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d",stack[i]);
        }
    }
    return;
}