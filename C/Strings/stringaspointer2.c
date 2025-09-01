#include<stdio.h>
#include<string.h>
int main(){

//character's pointer can also be used to store address of a string
//such direct initialisation using pointer result in a read only memory allocation
//can't change the individual character

char* ptr = "Physics Wallah";
//  ptr[0]='m'; error(bus)
    ptr ="Mohit Sharma";
    printf("%s\n",ptr);
/*NOTE:- in poiter initialization , we can modify entire string but not the individual charaters*/

char str[]="College Wallah";
//  str ="Mohit Sharma"; error
    str[0]='p';
    printf("%s\n",str);
/*NOTE:-in normal initialization , we can modify individual charaters but not entire string*/
    
char str1[] = "Jee Wallah";    
char* ptr1 =str1;
puts("befor:");
puts(str1);
puts(ptr1);
ptr1 ="Comptetion Wallah";
puts("after:");
printf("%s\n",str1);
printf("%s",ptr1); 
    return 0;
}