#include<iostream>
using namespace std;

int f(int first,int second){
      return __builtin_popcount(first^second);
}
int main (){

    cout<<f(1,16)<<endl;
    
    return 0;
}