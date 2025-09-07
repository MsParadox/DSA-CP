#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while (t--)
   {
    string s;
    cin>>s;
    int n=s.length();
    int sum=0;
    int two=0;
    int three=0;
    for(int i=0;i<n;i++){
     
     if(s[i]=='2') two++;
     if(s[i]=='3') three++;
     sum+=(s[i]-'0');
    }
    
    bool flag =false;
    if(two>8) two=8;
    if(three>8) three=8;
    for(int i=0;i<=two;i++){
        for(int j=0;j<=three;j++){
            int temp =sum+i*2 +j*6;
            if(temp%9==0) {
             flag =true;
             break;
            }
        }
    }
    cout<<(flag?"YES":"NO")<<endl;

   }
    
    return 0;
}
// 9

// 123
// 322
// 333333333333
// 9997
// 5472778912773
// 1234567890
// 23
// 33
// 52254522632

// NO
// YES
// YES
// NO
// NO
// YES
// NO
// YES
// YES
