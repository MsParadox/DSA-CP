#include<stdio.h>
#include<string.h>
int main(){
    char str [20]="mohitsharma";
    printf("%s\n",str);
    for (int i = 10; i >=2; i--){
        str[i+1]=str[i];
    }
    str[2]='p';
    printf("%s",str);    
    
    return 0;
}