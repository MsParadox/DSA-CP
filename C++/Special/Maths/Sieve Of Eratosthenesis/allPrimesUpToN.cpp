#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


void fillSieve(vector<bool> &sieve){
    int n=sieve.size()-1;
    for (int i = 2; i <=sqrt(n); i++)
    {
        for (int  j = i*2; j <=n; j+=i)
        {
            sieve[j]=0;
        }
        
    }
    
}
void PrintPrimes(int n){
    if(n<=1) return;
    
    vector<bool> sieve(n+1,1);
    fillSieve(sieve);
    sieve[0]=0;
    sieve[1]=0;
    for (int i = 2; i <=n; i++)
    {
    if(sieve[i]==1) cout<<i<<" "; }
    
}


int main(){
PrintPrimes(100);

    return 0;
}