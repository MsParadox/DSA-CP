#include<stdio.h>
#include<string.h>

typedef struct pokemon
{ int hp;
  int speed;
  int attack;
  char tier;
  char name[15];    
} pokemon;

int main (){

pokemon pikachu;
pikachu.hp =60;
pikachu.attack=50;
pikachu.speed=100;
pikachu.tier ='A';

pokemon* x = &pikachu;

(*x).hp =70;
printf("%d\n",pikachu.hp);
printf("%p\n",x);
printf("%p\n",pikachu.hp);
printf("%p\n",pikachu.attack);
printf("%p\n",pikachu.speed);
printf("%p\n",pikachu.tier);
return 0;
}