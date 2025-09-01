#include<stdio.h>
#include<stdlib.h>

int main (){
//reallocation
int* ptr =(int*) malloc(10*4);//40 bytes allocated
printf("%p\n",ptr);
//no loss of data
ptr =realloc(ptr,20000*4);//80 bytes allocated
printf("%p\n",ptr);
free(ptr);
printf("%p\n",ptr);
ptr=NULL;
printf("%p\n",ptr);
    return 0;
}