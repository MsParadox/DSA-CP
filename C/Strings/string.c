#include<stdio.h> 
int main(){
char ch ='m';
int x= (int)ch;
printf("%d\n",x);
printf("%d\n",ch);

char arr[5] = {'m','o','h','i','t'};
printf("%c\n",arr[2]);
printf("%p\n",&arr[0]);
printf("%p\n",&arr[1]);
printf("%p\n",&arr[2]);
printf("%p\n",&arr[3]);
printf("%p\n",&arr[4]);

// printing Hello World by using array

char a[11]={'H','e','l','l','o',' ','W','o','r','l','d'};
    for (int i = 0; i < 11; i++)
    {
     printf("%c",a[i]);
    }
    
    return 0;
}
