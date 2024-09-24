#include<stdio.h>
#include<string.h>


 struct structure{
    char name[50];
    int class;
    int roll ;
    float marks;
 }a,b,c,d;
 
int main(){

   struct structure{
    char name[15];
    int roll;
    int class;
    float marks;
   }a,b,c,d;
    
    strcpy(a.name,"vaibahv");
    a.roll =1;
    a.class=5;
    a.marks=85.9;
    strcpy(b.name,"vishnu");
    b.roll =2;
    b.class=5;
    b.marks=90;

   
   strcpy(c.name,"vibha");
    c.roll =3;
    c.class=5;
    c.marks=95.6;
    
    
    d=c;
    printf("%d\n",d.roll);
    printf("%d",d.class);
    return 0;
    }
    


 