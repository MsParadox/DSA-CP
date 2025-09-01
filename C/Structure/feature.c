#include<stdio.h>
#include<string.h>
int main (){
typedef struct pokemon
{ int hp;
  int speed;
  int attack;
  char tier;
  char name[15];    
} pokemon;

pokemon a,b,c;
a.attack = 100;
a.hp=100;
a.speed =90;
a.tier ='A';strcpy(a.name,"Blastoise");

//normal method
//b.attack =a.attack;
//b.hp = a.hp;
//b.speed =a.speed;
//strcpy(b.name,a.name);

//Deep copy
b = a;
printf("%d\n",b.attack);
printf("%s\n",b.name);
b.attack = 200;
strcpy(b.name, "mohit");
printf("%d\n",a.attack);
printf("%d\n",b.attack);
printf("%s",b.name);



return 0;
}