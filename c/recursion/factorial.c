#include<stdio.h>
int fact(int n);
int main(){
    int num,i,p=1;
    printf("enter the term upto which factorial is required:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        p=fact(i);
        printf("%dth factorial is:%d\n",i,p);
    }
}
int fact(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
    return 0;
}