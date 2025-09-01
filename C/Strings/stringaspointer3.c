#include<stdio.h>
#include<string.h>
int main(){

char str[]="College Wallah";
char* ptr =str;
*ptr ='m';
    printf("%s\n",str);
 
char str1[]="Physics Wallah";
char* ptr1 =str1;
/*shallow copy:-ptr1 points to the same character array str1
 and change in str1 also reflects in ptr1*/
str1[0]='m';
    printf("%s\n",ptr1);

//deep copy :-
//calculate size of str1 using loop and \0  & store
int size =0;
int k =0;
while(str1[k]!='\0'){
    size++;
    k++;}
char str2[size];
//fill str2 using loop and size
for(int i =0;i<size+1;i++){
    str2[i]=str1[i];
}
printf("%s\n",str1);
printf("%s\n",str2);
    return 0;
}