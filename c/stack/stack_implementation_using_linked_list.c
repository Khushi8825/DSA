    #include<stdio.h>
    #include<stdlib.h>

    struct node{
        int data;
        struct node* link;
    };
    //struct node* stop=0;
    struct node* top= 0;
    void push(int x){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        // if(!newnode){
        //     printf("\n overflow");
        //     return;
        // }
        newnode->data=x;
        newnode->link = top;
        top = newnode;
        printf("\n pushed onto stack \n");
        return;
    }

    int pop(){
        if(top==NULL){
            printf("\n underflow \n");
            return -1;
        }
        else{
            struct node* temp;
            temp=top;
            int poppedvalue=temp->data;
            top=temp->link;
            free(temp);
            printf("\n popped from stack  %d \n", poppedvalue);
            return poppedvalue;
        }

    }

    int peek() {
        if(top==NULL){
            printf("\n stack is empty \n");
            return -1;
        }

        return top->data;
    }

    void display(){
        if(top==NULL){
            printf("\n stack is empty \n");
            return;
        }
        else{
            struct node* temp=top;
            while(temp!=0){
                printf(" %d",temp->data);
                temp=temp->link;
            }
        }
        return;
    }

    int main(){
        int choice,value;
        do{
            printf("\n 1.PUSH \n 2.POP \n 3.PEEK \n 4. DISPLAY \n 5.EXIT \n Enter your choice : ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                printf("\n Enter the value you want to insert : ");
                scanf("%d",&value);
                push(value);
                break;
                case 2:
                pop();
                break;
                case 3:
                peek();
                break;
                case 4:
                display();
                break;
                case 5:
                printf("\n exit \n");
                break;
            }
        }while(choice!=5);

        
        
        return 0;
    }

