#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
    int roll;
    char name[100];
    char dept[50];
    char course[50];
    int joiningyear;

}student;

void check(struct student p,struct student q){
bool value=strcmp(p.dept,q.dept);
if(value==0)
printf("department are same");
else
printf("departments are different");
return;
}
void check(struct student p,struct student q);
int main(){

 student a;
 a.roll=32;
 strcpy(a.name,"shiva");
 strcpy(a.dept,"technical");
 strcpy(a.course,"B.tech");
 a.joiningyear=2024;
 student b;
 b.roll=32;
 strcpy(b.name,"adi");
 strcpy(b.dept,"technical");
 strcpy(b.course,"B.tech");
 b.joiningyear=2024;
 check( student  a,student b);

 return 0;
}