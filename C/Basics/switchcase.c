#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tues");
        break;
         case 3:
        printf("wed");
        break;
         case 4:
        printf("thurs");
        break;
         case 5:
        printf("fri");
        break;
         case 6:
        printf("sat");
        break;
         case 7:
        printf("sun");
        break;

    default: 
        printf("invalid\n");
        break;
    }

    int a;
    scanf("%d",&a);
    char ch;
    scanf("%c",&ch);
    int b;
    scanf("%d",&b);
    switch (ch)
    {
        case '+':
        printf("%d",a+b);
        break;
         case '-':
        printf("%d",a-b);
        break;
         case '*':
        printf("%d",a*b);
        break;
         case '/':
        printf("%f",(float)a/b);
        break;
        default:
        printf("invalid");
        break;

    }
    return 0;
}