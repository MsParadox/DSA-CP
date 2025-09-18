#include<iostream>
using namespace std;
int maxPow2lessThanN(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;
}


int main (){

    cout<<maxPow2lessThanN(13)<<endl;
    

    return 0;
}