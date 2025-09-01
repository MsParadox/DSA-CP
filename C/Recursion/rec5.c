#include<stdio.h>
int f( int n){
if(n==2 || n==1) return n;   
 return f(n-1)+f(n-2);

}
int main(){

    int n;
    printf("Enter:");
    scanf("%d",&n);
int ways =   f(n);

 printf("%d",ways);
    
    return 0;
}
