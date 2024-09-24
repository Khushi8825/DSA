#include<stdio.h>
#include<string.h>
struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50];
    
};
int main(){
    struct pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=70;
    pikachu.attack=100;
    strcpy(pikachu.name,"pikachu");
    pikachu.tier='A';
    struct pokemon* x = &pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.name);

    printf("%p",x);
    return 0; 
}

