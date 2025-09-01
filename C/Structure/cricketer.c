#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char name[15];
        int age;
        int matches;
        float average;
    } cricketer;
    
    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        char str[15];
        scanf("%s",str);
        strcpy(arr[i].name,str);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf("%f",&arr[i].average);
    }
    
     for (int i = 0; i < 3; i++)
    {
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].age);
        printf("%d\n",arr[i].matches);
        printf("%f\n\n",arr[i].average);
        
         }
    
    return 0;
}