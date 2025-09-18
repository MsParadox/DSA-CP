#include<iostream>
#include<vector>

using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> f(n+1,1);
    int MOD =1000000000 +7;
for (int i = 2; i <= n; i++)
{
    f[i]=((i%MOD) * (f[i-1]%MOD))%MOD;
}

return f;
}
int main(){
    vector<long long int> r=factorial(25);
    for (int i = 0; i < r.size(); i++)
    {
        cout<<i<<"! ="<<r[i]<<endl;
    }
    
    return 0;
}