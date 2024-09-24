#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    struct legendarypokemon{
        pokemon normal;
        char ability[15];
    };

    struct legendarypokemon mewto;  
    mewto.normal.hp=10;
    mewto.normal.speed=200;
    mewto.normal.attack=1000;
    mewto.normal.tier='A';
    strcpy(mewto.normal.name,"mewto");
    strcpy(mewto.ability,"pressure");
    return 0;
}
