#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number of integer you want:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
   int* ptr=(int*) malloc(n*sizeof(int));
   int* p=ptr;
   for(int i=1;i<=n;i++)
   {
    scanf("%d",&(*ptr));
    ptr++;

   }
   for(int i=1;i<=n;i++){
    printf("%d",(*p));
    p++;
   } 

}
