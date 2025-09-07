#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

bool checkNoOneToManyMapping(string pattern, vector<string> &values){
    unordered_map<char,string> m;
    for( int i=0 ;i<pattern.length();i++){
        if(m.find(pattern[i])!= m.end()){
            if(m[pattern[i]]!= values[i]) return false;
          } 
           else m[pattern[i]] = values[i];
        }
        return true; 
}


bool checkNoOneToManyMapping2(string pattern, vector<string> &values){
    unordered_map<string,char> m;
    for( int i=0 ;i<values.size();i++){
        if(m.find(values[i])!= m.end()){
            if(m[values[i]]!= pattern[i]) return false;
          } 
           else m[values[i]] =pattern[i];
        }
        return true; 
}

bool wordPattern(string pattern, string s) {
  if(s.size()<pattern.size()) return false;
    vector<string> values;
    string p="";
    for(int i=0;i<s.size();i++){
      if(s[i]==' ') {
        values.push_back(p);
        p="";
        continue;
      }
      p+=s[i];
      
    }
    values.push_back(p);

  bool ans =checkNoOneToManyMapping(pattern,values) && checkNoOneToManyMapping2(pattern,values);
    return ans;
    }


int main(){

cout<<wordPattern("abba","dog cat cat dog");


    return 0;
}