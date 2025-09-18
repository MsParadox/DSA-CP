#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//bad approch
bool isPrime(int n){
if(n==1) return false;
for (int i = 2; i <=sqrt(n); i++)
{if(n%i==0) return false;}
return true;
}

int countPrimes(int n){//t O(n*sqrt(n))
    int count =0;
    for (int  i = 2; i < n; i++)
    {
        if(isPrime(i)) count++;
    }
    return count;
}

//good approach

//SIEVE OF ERATOSTHENESIS-> Grid
/*sc  O(n)
  tc   O(n*log(log(n))) ~ O(n)
*/
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
int countPrimesOptimised(int n){
    if(n<=2) return 0;
    n = n-1;
    int count =0;
    vector<bool> sieve(n+1,1);//1 for primes
    fillSieve(sieve);
    sieve[0]=0;
    sieve[1]=0;
    for (int i = 2; i <=n; i++)
    {
    if(sieve[i]==1) count++; }
    
return count;}


int main(){

cout<<countPrimes(31)<<endl;
cout<<countPrimesOptimised(31);

    return 0;
}