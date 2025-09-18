#include<iostream>
using namespace std;
int gd(int n){
    for (int i =n/2; i>=1; i--)
    {
        if(n%i==0) return i;
    }
    return 1;
}
int minSteps(int n){//t O(n*logn)
    int count =0;
    while(n>1){
        int hf =gd(n);
        count +=(n/hf);
        n=hf;
    }
    return count;
}


int main(){

cout<<minSteps(20);


    return 0;
}