#include<stdio.h>
int main(){
//Nested structure

typedef struct pokemon{
    int hp;
    int speed;    //struct pokemon ->mohit
    int attack;
    char tier;
} mohit;

struct legendrypokemon
{
    int specialattack;
    mohit x;   
};


struct legendrypokemon pikachu;
pikachu.specialattack = 60;
pikachu.x.attack=70;


printf("%d\n",pikachu.x.attack);
printf("%d\n",pikachu.specialattack);
return 0;
}
