#include<stdio.h>
int main(){
    int x;
    printf("enter the number up to which pattern is required");
    scanf("%d",&x);
    int n=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
        {
            
            
                 n=n+1;
                 printf("%d ",n*n);
            
        }
        printf("\n");
    }
}