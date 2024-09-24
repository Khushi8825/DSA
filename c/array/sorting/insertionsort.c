#include<stdio.h>
#include<limits.h>
int main(){
    // int n,arr[n];
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[]={5,4,3,2,1};
    int n=5;
    printf("unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1&&arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("\nsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}