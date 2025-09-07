#include<iostream>


using namespace std;
string mergeAlternately(string word1, string word2) {
        int n =word1.length();
        int m= word2.length();
        string merge ="";
        for(int i=0;i<min(n,m);i++){
          merge+=word1[i];
          merge+=word2[i];
        }
        
        if(m<n) {
            for(int j=m;j<n;j++){
                merge+=word1[j];
            }
        }
        else if(m>n){
            for(int j=n;j<m;j++){
                merge+=word2[j];
            }
        }
    
      return merge;
     
    }


int main(){

cout<<mergeAlternately("abcdefgh","pqrstuvw");
    return 0;
}