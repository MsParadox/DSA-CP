#include<iostream>
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
int main (){

    int num =13;
    cout<<dtob(num);
    return 0;
}