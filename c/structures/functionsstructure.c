#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    }pokemon;

void change(pokemon p){
    p.hp=70;
    p.attack=60;
    p.speed=110;
    return;
}
    int main(){
    pokemon pikachu;
    pikachu.hp=10;
    pikachu.attack=50;
    pikachu.speed=100;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);


    return 0;
}
//structure are pass by value 