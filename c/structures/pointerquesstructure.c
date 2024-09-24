/*create a structure 'person' having 
attributes as age and weight .Access
 its structure variables using pointers.*/
#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
}person;
void change(person *p){
  (*p).age=30;//2nd method p->hp = (*p).hp
  (*p).weight=69.9;

  return;
}
int main(){
    person p1;
     p1.age=23;
     p1.weight=68.7;

    printf("%d\n",p1.age);
    printf("%f\n",p1.weight);
     
    change(&p1);

    printf("%d\n",p1.age);
    printf("%f\n",p1.weight);


    return 0;
}