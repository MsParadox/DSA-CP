#include<iostream>
using namespace std;
bool validPalindrome(string s){
    string p ="";
    for( int i =0;i<s.length();i++){
        int r=(int)s[i];
        if((r>=48&&r<=57)||(r>=97&&r<=122)) p+=s[i];
        else if(r>=65&&r<=90){
            r +=32;
            char k=(char)r;
            p+=k;    
        }
        else if(r<65||(r>90&&r<97)||r>122) continue;
    }
    cout<<p<<endl;
    if(p=="") return true;
    else {int isPalindrome =0;
   for ( int i = 0,j=p.length()-1 ; i <= p.length()-1,j>=0; i++,j--)
   {if(p[i]==p[j]) isPalindrome =1;
   else {
    isPalindrome =0;
     break;}
    }
    if(isPalindrome) return true;
    else return false;   
}
}
int main (){
    string s="A man, a plan, a canal: Panama";
    cout<<validPalindrome(s);
    return 0;
}