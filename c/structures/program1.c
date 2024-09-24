#include<stdio.h>
    struct class{
        int hp;
        int speed;
    } pikachu,charlizard;

    int main(){

    pikachu.hp=60;
    pikachu.speed=100;

    charlizard.hp=80;
    charlizard.speed=190;

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",charlizard.hp);
    printf("%d",charlizard.speed);   
    return 0;
}
