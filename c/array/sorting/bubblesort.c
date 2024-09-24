#include<stdio.h>
int main(){
    int n=5;
    int arr1[n];
    int clrscr();
    for(int i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr1[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=arr1[j]; }}}
     printf("\n");
     for(int i=0;i<5;i++){
        printf("%d",arr1[i]);
    }
    return 0;

}