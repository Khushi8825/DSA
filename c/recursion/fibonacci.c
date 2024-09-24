#include<stdio.h>
int fib(int n);
int main(){
    int num,i;
    printf("enter the number of series upto which required:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
       int j=fib(i);
        printf("%d ",j);
    }}
int fib(int n){
   
    if(n==1){
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
  
}