#include<stdio.h>
void pip(int n){
    if(n==0) return;
    printf(" %d",n);
    pip(n-1);
    printf(" %d",n);
    pip(n-1);
    printf(" %d",n);
    return;
}
int main(){
    int n;
    printf("Enter:");
    scanf("%d",&n);
    pip(n);
    return 0;
}