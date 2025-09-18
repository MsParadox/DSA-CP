#include<iostream>
#include<string.h>
using namespace std;

int main (){
    float n;
    cout<<"Negative Decimal No :";
    cin>>n;
    n=(-1)*n; 

    int p = n;
    float q= n-(float)p;
    int binary =0;
    int pow =1;
    while(p>0){
        int r = p%2;
        binary+= r*pow;
        pow*=10;
        p/=2;
    }
    int m =0;
    string s="";
    while(m<20){
        float k = q*2;
        int l = k;
        s+= to_string(l);
         
        
        q=k-(float)l;
        m++;
    }
    
    cout<<"-"<<binary<<"."<<s<<endl;
        return 0;

}