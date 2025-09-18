#include<iostream>
#include<vector>
using namespace std;
void f( string &s , int i ,string k ,vector<string> &result){
if (i==s.length())
   {  result.push_back(k);
   return; }

f(s, i+1 , k + s[i] , result);
f(s, i+1, k , result);
}
int main() {
string s = "abc";

vector<string> resul;
f(s,  0 ," ", resul);
for (int i = 0; i<resul.size() ; i++)
    {cout << resul[i]<<" ";} 
    return 0;
}