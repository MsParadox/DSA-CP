#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

bool checkallalphabet(string s){
if(s.length()<26) return false;

transform(s.begin(),s.end(),s.begin(),::tolower);

set<char> alphabet;
for(auto ch :s){
    alphabet.insert(ch);

}
return alphabet.size()==26;
}

int main (){

string input;
cin>>input;

cout<<checkallalphabet(input);

    return 0;
}