#include<iostream>
using namespace std;
int uniquePath(int m ,int n){
    if(m==1 &&n==1)  return 1;
    if(m==0 ||n==0) return 0;
    return uniquePath(m-1, n) + uniquePath(m, n-1);
}


int main(){

cout<<uniquePath(3,7);


    return 0;
}