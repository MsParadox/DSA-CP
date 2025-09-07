#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string reverseWords(string s) {
      s+=' ';
      string p="";
      string t="";
      for( int i =0; i<s.length();i++) {

        if(s[i]==' '){
           if (t.length()){
           t=' '+t;
           p=t+p;
        }
        t="";
        }
        else t+=s[i];
        }
        reverse(p.begin(),p.end());
        if(p[p.length()-1]==' ') p.pop_back();
        reverse(p.begin(),p.end());
      return p; 
    }
int main(){
    string s ="  a     good      example     ";
    cout<<reverseWords(s);
    return 0;
} 
