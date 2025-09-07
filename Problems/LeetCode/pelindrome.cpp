#include<iostream>
using namespace std;
bool isPalindrome( int x){
    if( x<0) return false;
    int p = x;
    int q = 0;
    while(x>0){
        q = q*10 + x%10;
        x = x/10;
    }
     return p==q;
    
    

}
int main (){
    cout<<isPalindrome(123454321);
    return 0;
}