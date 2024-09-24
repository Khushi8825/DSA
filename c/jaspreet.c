#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        {
            count++;
        }}
    if(count==2)
    {
        printf("number is prime number:");
    }
    else if(count==1) printf("number is 1");
    else{
        printf("number is not a prime number:");
    }
}