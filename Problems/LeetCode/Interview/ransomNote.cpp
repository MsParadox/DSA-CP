#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int> mp;
         for(int i=0;i<magazine.size();i++){
          mp[magazine[i]]++;
       }
         for(int i=0;i<ransomNote.size();i++){
          mp[ransomNote[i]]--;
       }
     
    for(auto e:mp){
        if(e.second<0) return false;
    }
       
return true;

    }


int main(){



cout<<canConstruct("aa","b");
    return 0;
}
