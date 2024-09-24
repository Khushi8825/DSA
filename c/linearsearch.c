#include<stdio.h>
#include<conio.h>
int main(){
    int arr[100],n,i,search,pos=-1;
    printf("enter the number od elements:");
    scanf("%d",&n);
    printf("enter the element to be search:");
    scanf("%d",&search);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    if(search==arr[i]){
        pos=i+1;
    }
    }
    if(pos==-1){
        printf("unsuccessful\n");
    }
    else {
         printf("element %d found at %d",search,pos);
    }
    return 0;
}