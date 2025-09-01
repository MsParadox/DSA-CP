#include<stdio.h>
#include<string.h>

typedef struct pokemon
{ int hp;
  int attack;
  int speed;
  char tier;
  char name[15];    
} pokemon;


void change(pokemon* p){

//(*p).something = x->something
p->hp=70;
p->attack =60;
(*p).speed=110;
(*p).tier ='M';
return;    
}

int main (){

pokemon pikachu={60,50}; //can not start from middle or end and it should be continuous. {60,50,....}
//pikachu.hp =60;
//pikachu.attack=50;
pikachu.speed=100;
pikachu.tier ='A';

pokemon* x = &pikachu;
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
change(&pikachu);
//change(x);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
return 0;
}