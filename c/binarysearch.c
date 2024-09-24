#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,arr[100],search,beg,end,mid;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("\nenter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the search element:");
    scanf("%d",&search);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(arr[mid]<search) 
        {
            beg=mid+1;
        }
        else if(arr[mid]==search)
        {
            printf("search %dis found at%d",search,mid+1);
            break;
        }
        else
        end=mid-1;
        
    }
    if(beg>end)
    {
        printf("search is not present in given array");
    }
 return 0;
}