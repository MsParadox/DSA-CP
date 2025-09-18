#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
  public:
   char data;
   bool terminal;
   int countWordsEndingHere;
   int countWordsStarting;
   unordered_map<char ,Node*> children;
   Node(char data){
     this->data=data;
     this->terminal=false;
     this->countWordsStarting=this->countWordsEndingHere=0;
     
   }
};

class Trie{
  public:
  Node* root;
  Trie(){
    root =new Node('\0');
  }
  void insert(string word){
    Node* curr=root;
    for(int i =0;i<word.length();i++){
      char ch =word[i];//curr char need to be checked
      if(curr->children.count(ch)){
  
        curr=curr->children[ch];
        curr->countWordsStarting++;
      }
      else{
        Node* child=new Node(ch);
        curr->children[ch]=child;
        curr=curr->children[ch];
        curr->countWordsStarting++;
        
      }
    }
    curr->terminal=true;
    curr->countWordsEndingHere++;
  }
  int countWordsEqualTo(string word){
      Node* curr=root;
    for(int i =0;i<word.length();i++){
      char ch =word[i];//curr char need to be checked
      if(curr->children.count(ch)){
        curr=curr->children[ch];
      }
      else{
        return 0;
      }
    }
    
    return curr->countWordsEndingHere;
  }
   int countWordsStartingWith(string prefix){
      Node* curr=root;
    for(int i =0;i<prefix.length();i++){
      char ch =prefix[i];//curr char need to be checked
      if(curr->children.count(ch)){
        
        curr=curr->children[ch];

      }
      else{
        return 0;
      }
    }
    return curr->countWordsStarting;
     
   }
    
   void erase(string word){
      Node* curr=root;
    for(int i =0;i<word.length();i++){
      char ch =word[i];
        curr=curr->children[ch];
        curr->countWordsStarting--;
     }
     curr->countWordsEndingHere--;
     
   }
};

int main (){
  return 0;
}