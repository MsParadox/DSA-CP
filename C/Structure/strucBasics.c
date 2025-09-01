#include<stdio.h>
int main(){
// user defined datatype like class in c++ and java
// array vs structure
//arr -> single datatype    and structure -> multiple attributes and many datatype

    struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
} pikachu, charizard;
//struct pokemon pikachu;

//pikachu.attack = 60;
printf("Enter pikachu attack :");
scanf("%d",&pikachu.attack);
pikachu.hp = 50;
pikachu.speed = 100;
pikachu.tier ='A';
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);

//struct pokemon charizard;
charizard.attack = 130;
charizard.hp = 80;
charizard.speed = 90;
charizard.tier ='S';
printf("%d\n",charizard.attack);
printf("%d\n",charizard.hp);
printf("%d\n",charizard.speed);
printf("%c",charizard.tier);

//char ch[15]; 
//ch ="Mohit Sharma";   ERROR
//here we have to fill string by loop
//solution :-> strcpy(ch ,"Mohit Sharma");   correct

return 0;
}
