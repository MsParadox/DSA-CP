#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
// memory allocation in heap
// malloc() , calloc()

//memory re_allocation
//realloc() 

//memory de_allocation
//free()

//malloc
int a = sizeof(bool);
printf("%d\n",a);

int *ptr =(int*) malloc(10*sizeof(int));
char* ptr1 =(char*) malloc(20*sizeof(char));

//calloc
float* ptr2 = (float*) calloc(40,sizeof(float));
char* ptr3 =(char*) calloc(10,sizeof(char));
//one differance betweem malloc() and calloc() is that calloc()
//initiazes all the allocated memory blocks with value 0 , whereas
//malloc() in which blocks allocated have garbage value.
printf("%d\n",*ptr);
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
printf("%d\n",*ptr3);

ptr++;
ptr1++;
ptr2++;
ptr3++;
printf("%d\n",*ptr);
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
printf("%d\n",*ptr3);
free(ptr);
free(ptr1);
free(ptr2);
free(ptr3);
ptr=NULL;
ptr1=NULL;
ptr3=NULL;
ptr2=NULL;
printf("%d\n",*ptr);
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
printf("%d\n",*ptr3);
return 0;
}