
#include<stdio.h>
void mohit(int x , int n){
    
 if (x==n+1) return;
    printf("%d\n",x);

 mohit(x+1,n);
   return;
}
int main(){
int n;
printf("enter:");
scanf("%d",&n);

mohit(1,n);
  return 0;}