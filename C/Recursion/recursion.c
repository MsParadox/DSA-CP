#include<stdio.h>

void mohit(int n){
    if( n==0) return;
    printf("ms\n");
    
     mohit(n-1);
     return;
}


int main(){
int n;

printf("enter:");

scanf( "%d",&n);

mohit(n);
  return 0;

}