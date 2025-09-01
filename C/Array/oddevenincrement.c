#include<stdio.h>
int main(){
    int arr[7] ={1,2,3,4,5,6,7};
    for(int i=0 ; i<=6;i++){
        if(i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    


    int arr1[7] ={1,2,3,4,5,6,7};
    int sumeven= 0;
    int sumodd = 0;
    for(int i=0 ; i<=6;i++){
        if(i%2!=0) sumodd+=arr1[i];
        else sumeven+=arr1[i];
    }
    printf("the difference at even and odd idx is:%d",sumeven-sumodd);
    return 0;
}