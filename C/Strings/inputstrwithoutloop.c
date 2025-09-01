#include<stdio.h>
#include<string.h>
int main(){

char str[]="college wallah is best";//no need of size if initialising already
printf("%s",str);
printf("\n");
puts(str);
puts("str");

char str1[40];//size must be given if declaring only
char str2[40];
puts("1: ");
scanf("%s",str1);//only the first word will be taken as input like cin>> in c++
printf("%s",str1);
printf("\n");


puts("2 :");
gets(str2);//entire sentence can be input like getline() in c++
puts(str2);

//alternative
puts("3 :");
char str3[20];
scanf("%[^\n]s",str3);
puts(str3);
    return 0;
}