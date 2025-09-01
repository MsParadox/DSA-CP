#include<stdio.h>
int f( int cr ,int cc , int er ,int ec){
if( cc== ec ) return 1;
if( cr==er ) return 1;
return (f(cr+1,cc,er,ec))+ (f(cr,cc+1,er,ec));
}
int main(){

    int n;
    printf("Enter:");
    scanf("%d",&n);
   int m;
    printf("Enter:");
    scanf("%d",&m);

int ways =   f(1,1,n,m);

 printf("%d",ways);
    
    return 0;
}
