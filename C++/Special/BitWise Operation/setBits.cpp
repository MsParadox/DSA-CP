#include<iostream>
using namespace std;
//built in fuction
int countSetBits(int n){
    return __builtin_popcount(n);
}
//ready made
int countSetBits2(int n){
    int count =0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main (){

    cout<<countSetBits(13)<<endl;
    cout<<countSetBits2(13)<<endl;

    return 0;
}