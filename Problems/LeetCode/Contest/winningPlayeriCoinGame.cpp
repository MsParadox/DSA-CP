#include<bits/stdc++.h>
using namespace std;
string losingPlayer(int x, int y) {
     int k=0;
     while(x>=1&&y>=4){
        k++;
      x--;
      y-=4;
     }
    return (k%2==1)?"Alice":"Bob";     
    }

int main(){
string ans =losingPlayer(4,11);
cout<<ans;
    return 0;
}