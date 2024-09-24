#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,m,arr[100][100],sum=0;
    printf("enter the order of matrix:");
    scanf("%d%d",&n,&m);
    printf("enter the elements of the matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
           if(i==j){
            sum=sum+arr[i][j];
           }
        }
    }
    printf("sum of diagonal elements is:%d",sum);
   
    

    return 0;
}