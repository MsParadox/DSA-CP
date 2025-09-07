#include<iostream>
using namespace std;
int lenOfLastWord(string s){
int right =0;
int count =0;
for (int i = s.length()-1;i>=0; i--)
{   
    if(s[i]!=' '){
        count++;
        right =1;
    }
    else if(right) break;
    
}

return count;
}
int main (){
    string s = "   fly me   to   the moon  ";
    cout<<lenOfLastWord(s);
    return 0;
}