#include<stdio.h>
int main(){
    int n;
    int arr[9]={5,0,2,0,0,4,1,3,0};
    int ans[9];
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",arr[i]);
    // }
     printf("original  array\n");
    for(int i=0;i<9;i++){
         printf("%d",arr[i]);
     }
    int idx=0;
    for(int i=0;i<9;i++){
        if(arr[i]!=0){
        ans[idx]=arr[i];
        idx++;
        }
    }
    while(idx!=9){
       ans[idx]=0;
       idx++;
    }
    printf("\nzero push to end\n");
    for(int i=0;i<9;i++){
        printf("%d",ans[i]);
    }
    return 0;
}