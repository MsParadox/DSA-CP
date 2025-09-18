#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
string s;
cin>>s;
int idx = s.length()-1;
unordered_map<char, int> um;
for(int i =0; i<s.length();i++){
  um[s[i]]++;
  if(um[s[i]]>1) {
  idx =min(idx,i);
  }
   
}
for(auto pair: um){
    if(pair.second>1 && pair.first==s[idx]){
        cout<<"character->"<<pair.first<<endl;
        cout<<"Frequency->"<<pair.second<<endl;
         }
}
    return 0;
}