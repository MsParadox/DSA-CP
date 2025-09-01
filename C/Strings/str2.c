#include<stdio.h>
int main(){

char str[]="college wallah";
str[0]='m';
str[1]=97;
int i=0;
while(str[i]!='\0'){
    printf("%c",i[str]);
    i++;
}
// str[i]==i[str]==*(str+i)==*(i+str)
    return 0;
}