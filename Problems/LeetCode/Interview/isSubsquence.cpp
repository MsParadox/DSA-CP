#include<iostream>
using namespace std;
bool isSubsquence(string s ,string t){
    if(s==""&&t=="") return true;
char c =s[0];
int idx =0;
int isTrue =0;
for(int i =0;i<t.length();i++){
        if(t[i]==c){
        idx++;
        c=s[idx];
    }
    if (idx==s.length()) {
        isTrue=1;
        break;}
}
return isTrue;

}

int main (){
    string s="bsv";
    string t="basdavg";
    cout<<isSubsquence(s,t);
    return 0;
}