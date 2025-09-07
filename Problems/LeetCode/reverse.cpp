#include<iostream>
using namespace std;
int reverse( int z){
    long x =z;
    long num = 0;
    if (x>=0){
    while(x>0){
        int rem = x%10;
        num = rem+ num*10;
        x = x/10;
    }
    if( num> INT32_MAX|| num < INT32_MIN) return 0;
    return num;}
else {
    x = x*-1;
     while(x>0){
        int rem = x%10;
        num = rem+ num*10;
        x = x/10;
    } if(num>INT32_MAX|| x< INT32_MIN) return 0;
    return num *-1;
    
}}
int main (){
    cout<< reverse(-2147483412);
     return 0;
}