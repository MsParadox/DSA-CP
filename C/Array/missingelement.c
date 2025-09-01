#include<stdio.h>
int main(){
//find missing ele in an array from 1 to 10
int arr[10]={1,2,3,4,5,6,8,9,10};
int sum = 0;
for( int i= 0; i<=8; i++){
    sum =sum +arr[i];
}
int sum1ToN =10*(10+1)/2;
printf("The missing element is :%d",sum1ToN-sum);
    return 0;
}