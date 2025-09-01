#include<stdio.h>
int main(){
//null character \0
//ascii value of \0 is 0
char ch ='\0';
printf("%d",ch);

printf("\n");
int x=0;
char a =(char)x; //a =\0
printf("%c",a);

//printing string using null character
char arr[]={'a','b','c','d','e','\0'};
int i=0;
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
printf("\n");
//Alternative
char b[] = "Mohit";
int k = 0;
while(k<5){
    printf("%c",b[k]);
k++;
  }
printf("\n");
//for string use %s not %c
printf("%s",b);
printf("\n");

char c[]="mohit sharma\0";
int p =0;
while (c[p]!='\0')
{
 printf("%c",c[p]);
 p++;
}
printf("\n");
char d[]="mohit sharma";
int q =0;
while (d[q]!='\0')
{
 printf("%c",d[q]);
 q++;
}
printf("\n");
printf("%s",c);
//size of string is (appearing size+1) as \0 also included
/*ize is 13+1 =14
char a[14]="collegewallah";  correct
char a[13]="collegewallah";  incorrect
char a[20]="collegewallah";  correct
*/
    return 0;
}