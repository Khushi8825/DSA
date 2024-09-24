#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,8,6,4,5,3,2};
    printf("unsorted array\n");
    for(int i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        int min=INT_MAX;
        int minidx=-1;
        for(int j = i;j<7;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        int temp=arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
        }}
    printf("\nsorted array\n");
    for(int i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}