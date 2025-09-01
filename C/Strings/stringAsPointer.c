#include<stdio.h>
#include<string.h>
int main (){
    char str[]="College Wallah";
    char* ptr =&str[0];
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%c\n",*ptr);

    char str1[]="College Wallah";
    printf("%p\n",&str1[0]);
    printf("%p\n",str1);

    char str2[]="College Wallah";
    char* ptr2 = str2;
    int i =0;
    while(*ptr2!='\0'){
        printf("%c",*ptr2);
        ptr2++;
        i++;
    }

    printf("\n");
    int x=4;
    int* ptr3 =&x;
    printf("%p\n",&ptr3);
    printf("%d\n",*ptr3);

    return 0;
}
