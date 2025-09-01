#include<stdio.h>
#include<string.h>
int main(){

//(1)strlen(char* str) : to find length of string
char* str= "Mohit sharma";
int x = strlen(str);
printf("%d\n",x); 

//(2)strcpy(char*s2, char*s1) :copy the contents of s1 to s2
char s1[13]="Rohit sharma";
char s2[13];
strcpy(s2,s1);
printf("%s\n",s2);
s2[0]='m';//deep copy
printf("%s\n",s1);
printf("%s\n",s2);

//(3)strcat(char*s1, char*s2) :concat s2 to s1
char s3[13]="Ruchi"; //s3 size>=12(5+6+1) else error
char s4[]="Sharma";
strcat(s3,s4);
printf("%s",s3);

char* s5= "papa";//read only
char* s6= "mummy";//read only  can not concate
strcat(s5,s6);
printf("%s",s5);

   return 0;
}