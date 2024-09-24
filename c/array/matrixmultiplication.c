#include<stdio.h>
#include<conio.h>
int main(){
    int r1,r2,c1,c2,a,b;
    printf("enter the order of matrix 1&2:\n");
    scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
    int  mat1[r1][c1], mat2[r2][c2], pro[100][100];
    if(c1!=r2)
{
    printf("multiplication is not possible");
}
    else
    {
    printf("enter the values of matrix1\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("enter the values of matrix 2:\n");
        for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
        for(int i=0;i<r1;i++)//if c1==r2
        {
            for(int j=0;j<c2;j++)
            {
                pro[i][j]=0;
                for(int k=0;k<r2;k++)
                {
                   pro[i][j]=pro[i][j] + mat1[i][k]*mat2[k][j];
                }
            }
        }
    
    printf("the product of given matrix is:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }
  }
  return 0;
}

