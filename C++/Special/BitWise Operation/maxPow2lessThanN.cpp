#include<iostream>
using namespace std;
int maxPow2lessThanN(int n){
    //Brian Karniger Algorithm
    int temp;
    while(n>0){
        temp=n;
        n=(n&(n-1));
    }
    return temp;
}
    int maxPow2greaterThanN(int n){
    int temp;
    while(n>0){
        temp=n;
        n=(n&(n-1));
    }
    return temp*2;
}
int main (){

    cout<<maxPow2lessThanN(13)<<endl;
    cout<<maxPow2greaterThanN(13)<<endl;

    return 0;
}