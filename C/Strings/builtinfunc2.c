#include<stdio.h>
#include<string.h>
int main(){


//(3)strncpy(char*s1, char*s2, int len) :copy substring from s2 of size len start from first charactr in s1
char s9[]="mohitshrma";
char s10[]="fhjkhklhl";
strncpy(s9,s10,3);
printf("%s\n",s9);
//(4)strcmp(char*s1, char*s2) :compares the two string
char s7[]="mohitlkj";//equal -> 0
char s8[]="mohitlkj";//not equal ->1
int p=strcmp(s7,s8);
printf("%d\n",p);

   return 0;
}