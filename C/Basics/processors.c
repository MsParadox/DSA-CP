//#include<stdio.h>
//#include -> processor directive
//<stdio.h>  -> standard input and output header file
//printf ,scanf

//#include<math.h>
//sqrt,cbrt

//#include<limits.h>
//INT_MIN and INT_MAX
#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    float x = sqrt(3);
    float x1 = cbrt(8);
    printf("%f %f\n",x,x1);
    int y =INT_MAX;
    printf("%d\n",y);
    long z = LONG_MAX;
    printf("%lld\n",z);
    //long format specifier -> ld
    //long long ->lld
    //float ->f  double ->lf
    //expo notation ->e
    // x <-hexadeci  , o <-octal, %<- to print %
    long long a = LLONG_MAX;
    printf("%lld",a);
    return 0;
}