#include<stdio.h>
int main(){
    int arr[5] ={1,1,2,1,1};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);

    

int sub[50],i;
for(i=0;i<=48;i++);
{
sub[i]=i;
printf("\n%d",sub[i]);
}
    return 0;}
//math.h or cmath is for math functions like sqrt
//limits.h or climits is for INT_MIN or MAX 
//stdbool.h for boolean datatype