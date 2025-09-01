#include<stdio.h>
#include<string.h>
int main (){

// UNION:- only one member can be used at a time    
typedef union pokemon
{ int hp;
  int attack;
  int speed;
  char tier;
  char name[15];    
} pokemon;

pokemon pikachu;
pikachu.hp =60;
pikachu.attack=70;
pikachu.speed=100;
pikachu.tier ='A';
//strcpy(pikachu.name,"mohit");

printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s",pikachu.name);
return 0;
}