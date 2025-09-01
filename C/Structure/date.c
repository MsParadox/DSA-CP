#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main (){
typedef struct date
{ int day;
  int month;
  int year;
      
} date;

date a,b;
a.day =8;
a.month=7;
a.year =2005;

b.day = 30;
b.month = 7;
b.year = 2005;

bool flag = true;
if(a.day !=b.day) flag =false;
if(a.month !=b.month) flag =false;
if(a.year !=b.year) flag =false;
if (flag) printf("Yes");
else printf("No");
//wrong:-
/*if(a==b){
    printf( "Yes");
}
else{
    printf("No");
}*/


return 0;
}

