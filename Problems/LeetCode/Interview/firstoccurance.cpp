#include<iostream>
using namespace std;
int f(string haystack, string needle){
    if(needle.length()>haystack.length()) return -1;
   int idx =-1;
   int p=1;
   for(int i =0;i<haystack.length()-needle.length()+1;i++){
    if(needle[0]==haystack[i]){
        idx=i;
        for(int j=1;j<needle.length();j++){
            if(haystack[i+j]==needle[j]){
            p=0;
            }
            else p=1;
            if(p) {
                idx=-1;
                break;
            } 
        }
    }
    if(idx!=-1) break;
   }
   
    return idx;
}
int main(){
  string needle = "leet";
  string haystack ="leetcode";
  cout<<f(haystack,needle);    
    return 0;

}