#include<iostream>
#include<string.h>
using namespace std;
int dtob(int n){
     
    int binary =0;
    int pow =1;
    while(n>0){
        int r = n%2;
        binary+= r*pow;
        pow*=10;
        n/=2;
    }
    return binary;
}
int btod(int one){
    int ans =0;
    int pow =1;
    while(one>0){
        int r = one%10;
        ans += r*pow;
        pow *=2;
        one/=10;
    }
    return ans;
}
string dto2b(string s){
    for (int i = 0; i < s.length(); i++)
    { if(s[i]=='0') s[i] ='1';
     else s[i] ='0';
    }
    int one = stoi(s);
    int add1 = btod(one)+1;
   int x= dtob(add1);
  s = to_string(x);
    
  return s;

}
int main (){
    int n;
    cout<<"Negative Decimal No :";
    cin>>n;
    n=(-1)*n; 
    
   int binary =dtob(n);
   string s ="0"+ to_string(binary);

    string str =dto2b(s);
    cout<<"111111111111"<<str<<endl;
        return 0;

}