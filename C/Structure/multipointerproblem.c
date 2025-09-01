#include<stdio.h>
typedef int* mohit;
int main (){
    int x=5 , y=7;
    //int y=7;
    //int* p,q;    :-> int*p and int q;
    mohit a =&x,b =&y;
    printf("%p\n",a);
    printf("%p\n",b);

    return 0;
}