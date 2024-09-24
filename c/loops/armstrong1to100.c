#include<stdio.h>
int main(){
    int i,r,anum=0,num;
    for(i=1;i<=100;i++){
        num=i;
        anum=0;
        while(num>0){
            r=num%10;
            anum=anum+r*r*r;
            num=num/10;
        }
        if(i==anum){
            printf("%d ",anum);
        }
    }
}