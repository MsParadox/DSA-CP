#include<iostream>
#include<cmath>

using namespace std;

bool perfectNum(int n){
    int sum =0;
     for(int i=1;i<sqrt(n);i++){
        if(n%i==0) sum+=i;
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0) sum+=n/i;
    }
    return (n==sum);
}

int main(){


cout<<perfectNum(28);

    return 0;
}