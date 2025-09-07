#include<iostream>
using namespace std;
int minimumChairs(string s) {
       int minChairs =0;
       int chairs =0;
       for (auto e :s){
       if(e=='E'){
         if(chairs ==0) minChairs++; 
         else chairs --;
       }
       if(e=='L') chairs ++;
        }
        return minChairs; 
    }
int main (){
string s= "EEELEEL";
//"ELEELEELLL" 3
cout<<minimumChairs(s);
     return 0;
}