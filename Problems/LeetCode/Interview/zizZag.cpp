#include<iostream>
#include<vector>
using namespace std;
string f(string s, int numRows){
    if(numRows==1||numRows>=s.length()) return s;
    vector<vector<char>> v(numRows);
    int idx =0 ,d=1;
    for(auto e : s){
        v[idx].push_back(e);
        if(idx ==0) d=1;
        else if(idx ==numRows-1) d=-1;
        idx +=d;
    }
    string ans;
    for(auto p :v){
    for(char c :p){
     ans+=c;
    }}
    return ans;
}
int main(){
   string s ="PAYPALISHIRING";
   int n = 3;
   cout<<f(s,n);

    return 0;
}