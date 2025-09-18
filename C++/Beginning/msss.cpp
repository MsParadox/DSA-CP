#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revnum;
    while (n>0){
        int digit = n%10;
        revnum =digit;
        cout<< revnum;
        n/=10;

    }
   }