#include<bits/stdc++.h>


using namespace std;

string dtob(int num){
string s="";
while(num>0){
    if(num%2==0){
        s='0'+s;
    }
    else{
        s='1'+s;
    }
    num =num>>1;
}
return s;

}
int minChanges(int n, int k) {
       if(n==k) return 0; 
       string b1 = dtob(n);
       string b2 =dtob(k);
       int p =b1.length();
       int m=b2.length();
       
       cout<<p<<" "<<m<<" ";
       if(p<m){ 
        for(int i=0;i<(m-p);i++)  {
            b1='0'+b1;}
       }
       if(p>m) {
       for(int i=0;i<(p-m);i++)  {
         b2='0'+b2;}
       
       }
       cout<<b1<<" "<<b2<<endl;
       int z=0;
       for(int i=0;i<p;i++){
        if(b1[i]==b2[i]) continue;
        if(b1[i]!=b2[i]&&b1[i]=='1') {
            b1[i]=b2[i];
            z++;
        }
       }

    
        if(z>0&&b1==b2)  return z;
        return -1;
    }
int main(){

cout<<minChanges(13,4);
    return 0;
}