/*given an array of integers numbers that is
already sorted in non-decreasing order , find two
numbers such that they add up to a specific target no.*/
#include<stdio.h>
int main(){
    // int n,arr[n];
    // printf("enter the no.");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",arr[i]);

    // }
    int arr[8]={1,2,3,4,5,8,9,10};
    int target=8;
    for(int i=0;i<7;i++)
    {
        for (int j=i+1;j<8;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("target found");
                printf("%d %d",i,j);
            }
        }
    }
    return 0;
}
