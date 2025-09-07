#include<iostream>
using namespace std;
int val(char c){
    if(c=='I') { return 1;}
    else if (c=='V') { return 5;}
    else if (c=='X') { return 10;}
    else if (c=='L') { return 50;}
    else if (c=='C') { return 100;}
    else if (c=='D') { return 500;}
    else if (c=='M') { return 1000;}
}
int romToInt(string &s){
    int ans =0;
    for (int i = 0; i < s.length(); i++)
    { if(s[i]=='I'&&s[i+1]=='V'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
    else if(s[i]=='I'&&s[i+1]=='X'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
    else if(s[i]=='X'&&s[i+1]=='L'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
    else if(s[i]=='X'&&s[i+1]=='C'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
    else if(s[i]=='C'&&s[i+1]=='D'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
    else if(s[i]=='C'&&s[i+1]=='M'){
        ans+=val(s[i+1])-val(s[i]);
        i++;
    }
       else ans +=val(s[i]);
       
   }
  return ans;  

}
int main(){
    string s="MCMXCIV";
    cout<<romToInt(s);
    return 0;
}