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

/*pokemon pikachu;
pokemon charizard;*/

pokemon arr[3];
arr[0].attack=20;
arr[0].speed=80;
arr[0].tier= 'A';
strcpy(arr[0].name,"mohit");

arr[1].attack=120;
arr[1].speed=100;
arr[1].tier= 'S';
strcpy(arr[1].name,"rohit");

arr[2].attack=10;
arr[2].speed=60;
arr[2].tier= 'B';
strcpy(arr[2].name,"ruchi");

for (int i = 0; i < 3; i++)
{
    printf("%s,%d,%d,%c\n",arr[i].name,arr[i].attack,arr[i].speed,arr[i].tier);
}

    return 0;
}