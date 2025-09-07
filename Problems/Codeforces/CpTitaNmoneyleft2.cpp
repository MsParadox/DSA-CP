#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x;
       cin>>n>>x;
       x=x*(pow(3,n));
       
    for(int i=1;i<=n;i++)
    {
        x+=pow(3,i);
    }
    cout<<x<<endl;
    }
    return 0;
}