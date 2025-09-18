#include<iostream>
using namespace std;

string dtob(int num){
string s="";
while(num>0){
    if(num%2==0){
        s='0'+s;
    }
    else{
        s='1'+s;
    }
    num =num>>1;
}
return s;}


int flipBits(int n){
    int temp =n;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return n^temp;
}

 int flipbits2(int n){
    int num =n;
    int temp;
    while(n>0){
        temp=n;
        n=(n&(n-1));
    }
    return ((temp<<1)-1)^num;
    }

int main (){

    cout<<flipBits(16)<<endl;//10000 
    cout<<dtob(flipBits(16))<<endl;//01111 or 15
    cout<<flipbits2(16);
      return 0;
}