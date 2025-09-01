#include<stdio.h>
int mohit(int n){
    
 if (n==1) return 1;
 return (n+mohit(n-1));
   
}
int main(){
int n;
printf("enter:");
scanf("%d",&n);

int ans =mohit(n);
printf("%d",ans);
  return 0;}