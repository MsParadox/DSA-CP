#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrifix(vector<string> &strs){
    string s="";
    int istrue=0;
    for (int i = 0; i < strs[0].length(); i++)
    
    {for (int j = 1; j < strs.size(); j++)
    {
        if(strs[j][i]!=strs[0][i])
        { istrue=1;
          break; }
    else continue;}
    if (istrue) break;
    else s+=strs[0][i];
     }
    
    return s;
}
int main(){
    vector<string> strs ={"flower","flow","flight"};
    cout<<longestCommonPrifix(strs);
    return 0;
}