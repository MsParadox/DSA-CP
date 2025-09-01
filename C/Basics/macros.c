#include<stdio.h>
#define pi 3.14159265359//permanent
#define area(r) (pi*r*r)
int main (){
float pai = 3.14159265359;// can be lost(update) during the code
printf("%f\n",pi);
//float-> 6 decimal places
double p = 3.14159265359;
printf("%.15f\n",p);
//double ->15 deci places
long double q = 3.14159265359;
printf("%Lf\n",q);
printf("%f",area(10));
    return 0;
}