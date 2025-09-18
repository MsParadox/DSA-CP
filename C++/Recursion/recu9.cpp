
#include<iostream>
using namespace std;
int f( int n ,int m){
    
    if ( m==0) return 1;
    int ans =n*f(n,m-1);
    return  ans;
}
int main()
{ int result = f(3,4);
 cout<<result;
    return 0;
}